#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data
{
    friend std::istream& read(std::istream &is, Sales_data &item);
    friend std::ostream& print(std::ostream &os, const Sales_data &item);

public:
    Sales_data() = default;
    inline Sales_data(std::istream &is)
    {
        read(is, *this);
    }
	std::string isbn() const { return bookNo; };
	Sales_data& combine(const Sales_data&);
    Sales_data add(Sales_data& item);
    inline double avg_price();

private:
	std::string bookNo;
	unsigned units_sold;
	double revenue;

};

#endif