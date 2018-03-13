#include <iostream>

int main()
{
    int sum = 0;
    for (size_t i = 50; i <= 100; i++)
    {
        sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}