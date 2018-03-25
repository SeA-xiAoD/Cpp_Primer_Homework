#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int l[10];
    for (size_t i = 0; i < 10; i++)
    {
        l[i] = i;
    }
    int l2[10];
    for (size_t i = 0; i < 10; i++)
    {
        l2[i] = l[i];
    }
    vector<int> v1(10);
    for (size_t i = 0; i < 10; i++)
    {
        v1[i] = i;  
    }
    vector<int> v2 = v1;
    for (size_t i = 0; i < 10; i++)
    {
        cout << v2[i] << endl;
    }
    return 0;
}