#include <iostream>

using namespace std;

void swap_func(int &a, int &b)
{
    a = a^b;
    b = a^b;
    a = a^b;
}

int main()
{
    int a = 1, b = 2;
    cout << "a = " << a << "     b = " << b << endl;
    swap_func(a, b);
    cout << "a = " << a << "     b = " << b << endl;
    return 0;
}