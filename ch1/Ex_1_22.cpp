#include <iostream>
#include "Sales_item.h"

int main()
{
    std::cout << "Input book information:" << std::endl;
    Sales_item sum, temp;
    std::cin >> sum;
    while(std::cin >> temp)
    {
        sum += temp;
    }
    std::cout << sum << std::endl;
    return 0;
}