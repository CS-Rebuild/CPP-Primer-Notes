#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Quote {
    friend int operator!=(const Quote &lhs, const Quote &rhs);
public:
    Quote() {
        cout << __PRETTY_FUNCTION__ << endl;
    }

    Quote(const Quote &rhs) : bookNo(rhs.bookNo), price(rhs.price) {
        cout << __PRETTY_FUNCTION__ << endl;
    }

    Quote(Quote &&rhs) noexcept : bookNo(std::move(rhs.bookNo)), price(std::move(rhs.price)) {
        cout << __PRETTY_FUNCTION__ << endl;
    } 

    Quote& operator=(const Quote &rhs) {
        cout << __PRETTY_FUNCTION__ << endl;
        if (*this != rhs) {
            bookNo = rhs.bookNo;
            price = rhs.price;
        } 
        return *this;
    }

    Quote& operator=(Quote &&rhs) noexcept {
        cout << __PRETTY_FUNCTION__ << endl;
        if (*this != rhs) {
            bookNo = std::move(rhs.bookNo);
            price = std::move(rhs.price);
        }
        return *this;
    }

    Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price) {}
    std::string isbn() const { return bookNo; }
    virtual double net_price(std::size_t n) const {
        return n * price;
    }
    virtual void debug() const {
        cout << __PRETTY_FUNCTION__ << endl;
        cout << "bookNo: " << bookNo << " price: " << price << endl;
    }

    virtual ~Quote() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
private:
    std::string bookNo;
protected:
    double price = 0.0;
};


int inline operator!=(const Quote &lhs, const Quote &rhs) {
    return (lhs.bookNo != rhs.bookNo) && (lhs.price != rhs.price);
}

class Disc_quote : public Quote {
public:
    Disc_quote() = default;
    Disc_quote(const std::string &book, double price, std::size_t qty, double disc) : Quote(book, price), quantity(qty), discount(disc) {}
    double net_price(std::size_t) const = 0;
protected:
    std::size_t quantity = 0;
    double discount = 0.0;
};

class Bulk_quote : public Disc_quote {
public:
    Bulk_quote() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    Bulk_quote(const std::string &book, double price, std::size_t qty, double disc) : Disc_quote(book, price, qty, disc) {}
    Bulk_quote(const Bulk_quote &bq) : Disc_quote(bq) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    Bulk_quote(Bulk_quote &&bq) noexcept : Disc_quote(std::move(bq)) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    Bulk_quote& operator=(const Bulk_quote &rhs) {
        Disc_quote::operator=(rhs);
        cout << __PRETTY_FUNCTION__ << endl;
        return *this;
    }
    Bulk_quote& operator=(Bulk_quote &&rhs) noexcept {
        Disc_quote::operator=(std::move(rhs));
        cout << __PRETTY_FUNCTION__ << endl;
        return *this;
    }
    double net_price(std::size_t) const override;

    ~Bulk_quote() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

double Bulk_quote::net_price(std::size_t cnt) const {
    if (cnt > quantity) {
        return quantity * (1 - discount) * price + (cnt - quantity) * price;
    } else {
        return quantity * (1 - discount) * price;
    }
}

int main() {
    Bulk_quote bq("0001", 10.00, 10, 0.2);
    cout << bq.net_price(20) << endl;
    cout << "----" << endl;
    Bulk_quote bq2(bq);
    cout << "----" << endl;
    Bulk_quote bq3 = bq;
    cout << "----" << endl;
    bq3 = bq2;
    cout << "----" << endl;
    Bulk_quote bq4(std::move(bq3));
    cout << "----" << endl;
    bq2 = std::move(bq);
    cout << "----" << endl;
    
    vector<Quote> qvec;
    
    Bulk_quote b1("0001", 10.00, 10, 0.2);
    Bulk_quote b2("0002", 20.00, 10, 0.2);
    Bulk_quote b3("0003", 30.00, 10, 0.2);
    Bulk_quote b4("0004", 40.00, 10, 0.2);
    qvec.push_back(b1);
    qvec.push_back(b2);
    qvec.push_back(b3);
    qvec.push_back(b4);

    cout << b1.net_price(20) + b2.net_price(20) + b3.net_price(20) + b4.net_price(20) << endl;
    double sum = 0;
    for (auto &e : qvec) {
        sum += e.net_price(20);
    }
    cout << sum << endl;
}
