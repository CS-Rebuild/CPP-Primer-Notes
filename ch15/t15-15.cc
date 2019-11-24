#include <iostream>
#include <string>

using namespace std;

class Quote {
public:
    Quote() = default;
    Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price) {}
    std::string isbn() const { return bookNo; }
    virtual double net_price(std::size_t n) const {
        return n * price;
    }
    virtual void debug() const {
        cout << __PRETTY_FUNCTION__ << endl;
        cout << "bookNo: " << bookNo << " price: " << price << endl;
    }
    virtual ~Quote() = default;
private:
    std::string bookNo;
protected:
    double price = 0.0;
};

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
    Bulk_quote() = default;
    Bulk_quote(const std::string &book, double price, std::size_t qty, double disc) : Disc_quote(book, price, qty, disc) {}
    double net_price(std::size_t) const override;
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
    Disc_quote dq;
}
