#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>
using std::istream;
using std::ostream;

class Sales_data {
friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
friend istream& read(istream &is, Sales_data &item);
friend ostream& print(ostream &os, const Sales_data &item);

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
        read(is, *this);
    }

    Sales_data& combine(Sales_data &rhs);
    std::string isbn() const { return bookNo; }

private:
    double avg_price() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data::combine(Sales_data &rhs) {
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

inline double Sales_data::avg_price() const
{
    if (units_sold) 
        return revenue/units_sold; 
    else 
        return 0;
}

#endif
