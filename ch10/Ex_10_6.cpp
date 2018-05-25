#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    for(int num : v)
        cout << num << endl;
    fill_n(v.begin(), 5, 0);
    for(int num : v)
        cout << num << endl;
    return 0;
}