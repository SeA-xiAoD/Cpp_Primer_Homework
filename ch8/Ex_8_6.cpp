#include <iostream>
#include <string>
#include <fstream>
#include "Sales_data.h"

int main()
{
    std::ifstream is("data");
    Sales_data total;
    if(read(is, total))
    {
        Sales_data trans;
        while(read(is, trans))
        {
            if(total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }
        print(std::cout, total) << std::endl;
    }
    else
    {
        std::cerr << "No data!" << std::endl;
    }
    return 0;
}