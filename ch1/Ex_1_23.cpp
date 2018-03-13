#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sum, temp;
    std::cout << "Input book information:" << std::endl;
    std::cin >> sum;
    while(std::cin >> temp)
    {
        if(sum == temp)
        {
            sum += temp;
        }
        else
        {
            std::cout << sum << std::endl;
            sum = temp;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}