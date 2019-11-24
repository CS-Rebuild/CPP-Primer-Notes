#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data {
    Sales_data(std::string s, unsigned units, double price) : bookNo(s), units_sold(units), revenue(units * price) {}
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
        Sales_data& combine(const Sales_data &rhs);
        std::string isbn() const { return bookNo; }
    double avg_price() const;
};

Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

inline double Sales_data::avg_price() const
{
    if (units_sold) 
        return revenue/units_sold; 
    else 
        return 0;
}

#endif
