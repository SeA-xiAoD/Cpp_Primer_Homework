#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    int length = sizeof(ia) / sizeof(int);
    vector<int> v;
    list<int> l;
    for(int i = 0; i < length; i++)
    {
        v.push_back(ia[i]);
        l.push_back(ia[i]);
    }
    
    auto it_l = l.begin();
    while(it_l != l.end())
    {
        if(*it_l % 2 != 0)
            it_l = l.erase(it_l);
        else
            ++it_l;
    }
    cout << "list:" << endl;
    for(auto num : l)
        cout << num << endl;
    
    auto it_v = v.begin();
    while(it_v != v.end())
    {
        if(*it_v % 2 == 0)
            it_v = v.erase(it_v);
        else
            ++it_v;
    }
    cout << "vector:" << endl;
    for(auto num : v)
        cout << num << endl;

    return 0;
}