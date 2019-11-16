#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>
//#include <unordered_set>
#include <functional>
#include <stdexcept>
using std::istream;
using std::ostream;
using std::size_t;

class out_of_stock : public std::runtime_error {
public:
    explicit out_of_stock(const std::string &s) : std::runtime_error(s) {}
};

class isbn_mismatch : public std::logic_error {
public:
    explicit isbn_mismatch(const std::string &s) : std::logic_error(s) {}
    isbn_mismatch(const std::string &s, const std::string &lhs, const std::string &rhs) : std::logic_error(s), left(lhs), right(rhs) {}
    const std::string left, right;
}; 

//template <class T> class std::hash;
class Sales_data {
friend class std::hash<Sales_data>;
friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
friend istream& read(istream &is, Sales_data &item);
friend ostream& print(ostream &os, const Sales_data &item);

friend Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);
friend istream& operator>>(istream &is, Sales_data &item);
friend ostream& operator<<(ostream &os, const Sales_data &item);

friend bool operator==(const Sales_data &, const Sales_data &);

public:
    Sales_data(std::string s, unsigned cnt, double price) : 
        bookNo(s), units_sold(cnt), revenue(cnt * price) { 
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    Sales_data() : Sales_data("", 0, 0) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
    
    Sales_data(std::string s) : Sales_data(s, 0, 0) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    Sales_data(std::istream &is) : Sales_data() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        //read(is, *this);
        is >> *this;
    }

    Sales_data& combine(const Sales_data &rhs);
    Sales_data& operator+=(const Sales_data &);
    Sales_data& operator=(const std::string &);
    std::string isbn() const { return bookNo; }

private:
    double avg_price() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);
istream& operator>>(istream &is, Sales_data &item);
ostream& operator<<(ostream &os, const Sales_data &item);

Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream& read(istream &is, Sales_data &item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream& print(ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " "
        << item.revenue;// << " " << item.avg_price();
    return os; 
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

Sales_data& Sales_data::operator+=(const Sales_data &rhs) {
    if (isbn() != rhs.isbn())
        throw isbn_mismatch("wrong isbns", isbn(), rhs.isbn());
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum += rhs;
    return sum;
}

istream& operator>>(istream &is, Sales_data &item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    if (is)
        item.revenue = price * item.units_sold;
    else 
        item = Sales_data();
    return is;
}

ostream& operator<<(ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " "
        << item.revenue;// << " " << item.avg_price();
    return os; 
}

Sales_data& Sales_data::operator=(const std::string &isbn) {
    *this = Sales_data(isbn);
    return *this;
}

inline double Sales_data::avg_price() const
{
    if (units_sold) 
        return revenue/units_sold; 
    else 
        return 0;
}

inline
bool operator==(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn() == rhs.isbn() && 
           lhs.units_sold == rhs.units_sold && 
           lhs.revenue == rhs.revenue;
}
inline
bool operator!=(const Sales_data &lhs, const Sales_data &rhs)
{
    return !(lhs == rhs);
}

namespace std {
template <>
struct hash<Sales_data> {
    typedef size_t result_type;
    typedef Sales_data argument_type;
    size_t operator() (const Sales_data& s) const;
};

size_t hash<Sales_data>::operator()(const Sales_data& s) const {
    return hash<std::string>()(s.bookNo) ^
           hash<unsigned>()(s.units_sold) ^
           hash<double>()(s.revenue);
}

}

#endif
