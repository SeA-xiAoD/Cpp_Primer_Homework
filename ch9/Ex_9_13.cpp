#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    list<int> l{1, 2, 3, 4};
    vector<double> vd(l.begin(), l.end());
    for(auto num : vd)
    {
        cout << num << endl;
    }
    vector<int> vi1{1, 2, 3, 4, 5};
    vector<double> vi2(vi1.begin(), vi1.end());
    for(auto num : vi2)
    {
        cout << num << endl;
    }
    return 0;
}