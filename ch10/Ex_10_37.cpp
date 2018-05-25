#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list<int> l;
    for(auto it = v.begin() + 2; it != v.begin() + 7; it++)
        l.push_front(*it);
    for(int i : l)
        cout << i << endl;
    return 0;
}