#include <iostream>

int main()
{
    int sum = 0;
    int i = 50;
    while(i <= 100)
    {
        sum += i++;
    }
    std::cout << sum << std::endl;
    return 0;
}