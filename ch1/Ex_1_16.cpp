#include <iostream>

int main()
{
    int sum = 0, k = 0;
    while(std::cin >> k)
    {
        sum += k;
    }
    std::cout << sum << std::endl;
    return 0;
}