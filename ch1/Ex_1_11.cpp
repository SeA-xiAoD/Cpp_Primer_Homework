#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "Input two number:" << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "Output:" << std::endl;
    while(v1 != v2)
    {
        std::cout << v1 << std::endl;
        v1 += (v2 - v1)/abs(v2 - v1); //Deal with situation if v1 > v2
    }
    std::cout << v2 << std::endl;
    return 0;
}