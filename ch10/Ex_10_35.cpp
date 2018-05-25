#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i : v)
        cout << i << " ";
    cout << endl;
    for(auto it = v.cend(); it != v.cbegin();)
        cout << *--it << " ";
    cout << endl;
    return 0;
}