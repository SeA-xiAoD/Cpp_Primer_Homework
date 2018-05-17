#include <iostream>

using namespace std;

void swap_func(int* &a, int* &b)
{
    int *p = a;
    a = b;
    b = p;
}

int main()
{
    int a = 1, b = 2;
    int *p1 = &a, *p2 = &b;
    cout << *p1 << " " << *p2 << endl;
    swap_func(p1, p2);
    cout << *p1 << " " << *p2 << endl;
    return 0;
}