#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

struct Sales_data
{

public:
    inline Sales_data(std::string bookNo, unsigned units_sold, double revenue)
    {
        this->bookNo = bookNo;
        this->units_sold = units_sold;
        this->revenue = revenue;
        std::cout << 0 << std::endl;
    }
    inline Sales_data() : Sales_data("", 0, 0.0){
        std::cout << 1 << std::endl;
    }
    inline Sales_data(std::string bookNo) : Sales_data(bookNo, 0, 0.0){
        std::cout << 2 << std::endl;
    }

private:
	std::string bookNo;
	unsigned units_sold;
	double revenue;

};

#endif