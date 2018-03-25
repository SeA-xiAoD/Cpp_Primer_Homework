#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int *p = a;
    for (size_t i = 0; i < 10; i++)
    {
        *(p+i) = 0;
    }
    for (size_t i = 0; i < 10; i++)
    {
        cout << *(p+i) << endl;
    }
    return 0;
}