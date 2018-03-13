#include <iostream>

int main()
{
    std::cout << "Input two number:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "Output:" << std::endl;
    for (int i = v1; i != v2; i+=(v2-v1)/abs(v2-v1))
    {
        std::cout << i << std::endl;
    }
    std::cout << v2 << std::endl;
    return 0;
}