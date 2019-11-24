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
    virtual ~Quote() = default;
private:
    std::string bookNo;
protected:
    double price = 0.0;
};

class Bulk_quote : public Quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string &book, double p, std::size_t qty, double disc) : Quote(book, p), min_qty(qty), discount(disc) {}
    double net_price(std::size_t) const override;
private:
    std::size_t min_qty = 0;
    double discount = 0.0;
};

class Nbulk_quote : public Quote {
public:
    Nbulk_quote() = default;
    Nbulk_quote(const std::string &book, double p, std::size_t qty, double disc) : Quote(book, p), min_qty(qty), discount(disc) {}
    double net_price(std::size_t) const override;
private:
    std::size_t min_qty = 0;
    double discount = 0.0;
};

double Nbulk_quote::net_price(std::size_t cnt) const {
    if (cnt > min_qty) {
        return min_qty * (1 - discount) * price + (cnt - min_qty) * price; 
    } else {
        return cnt * (1 - discount) * price;
    }
}

double Bulk_quote::net_price(size_t cnt) const {
    if (cnt >= min_qty) {
        return cnt * (1 - discount) * price;
    } else {
        return cnt * price;
    }
}

double print_total(ostream &os, const Quote &item, size_t n) {
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
    return ret;
}

int main() {
    Quote q("0001", 10.00);
    Bulk_quote bq("0002", 20.00, 5, 0.1);
    print_total(cout, q, 10);
    print_total(cout, bq, 4);
    print_total(cout, bq, 10);
    Nbulk_quote nq("0003", 30.00, 5, 0.1);
    print_total(cout, nq, 10);
    print_total(cout, nq, 5);
    
}
