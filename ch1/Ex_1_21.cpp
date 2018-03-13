#include <iostream>
#include "Sales_item.h"

int main()
{
    std::cout << "Input two book information:" << std::endl;
    Sales_item i1, i2;
    std::cin >> i1 >> i2;
    std::cout << (i1 + i2) << std::endl;
    return 0;
}