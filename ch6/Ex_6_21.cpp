#include <iostream>

using namespace std;

int compare(int a, int *b)
{
    return (a > *b ? a : *b);
}

int main()
{
    int a = 1, b = 2;
    int *p = &b;
    cout << compare(a, p) << endl;
    return 0;
}