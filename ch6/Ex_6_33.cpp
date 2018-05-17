#include <iostream>
#include <vector>

using namespace std;

void func(vector<int> v, int k)
{
    if(k == v.size())
        return;
    cout << v[k] << endl;
    return func(v, k + 1);
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    func(v, 0);
    return 0;
}