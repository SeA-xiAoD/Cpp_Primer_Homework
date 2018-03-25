#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(10, 123);
    int a[10];
    for (size_t i = 0; i < 10; i++)
    {
        a[i] = v[i];
    }
    for (size_t i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}