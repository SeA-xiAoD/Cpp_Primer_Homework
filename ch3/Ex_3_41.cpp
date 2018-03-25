#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    vector<int> v(begin(a), end(a));
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}