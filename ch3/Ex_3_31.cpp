#include <iostream>

using namespace std;

int main()
{
    int l[10];
    for (size_t i = 0; i < 10; i++)
    {
        l[i] = i;
    }
    for (size_t i = 0; i < 10; i++)
    {
        cout << l[i] << endl;
    }
    return 0;
}