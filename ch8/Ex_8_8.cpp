#include <iostream>
#include <string>
#include <fstream>
#include "Sales_data.h"

int main(int argc, char* argv[])
{
    std::ifstream is("data");
    std::ofstream os(argv[1], std::ofstream::app);
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
                print(os, total) << std::endl;
                total = trans;
            }
        }
        print(os, total) << std::endl;
    }
    else
    {
        std::cerr << "No data!" << std::endl;
    }
    return 0;
}