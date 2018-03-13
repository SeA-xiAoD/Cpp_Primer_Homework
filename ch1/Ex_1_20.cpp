#include <iostream>
#include "Sales_item.h"

int main()
{
    std::cout << "Input book information:" << std::endl;
    Sales_item item;
    while(std::cin >> item)
    {
        std::cout << item << std::endl;
    }
    return 0;
}
