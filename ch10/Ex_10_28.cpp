#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> for_back, for_insert;
    list<int> for_front;
    copy(v.begin(), v.end(), back_inserter(for_back));
    for(int i : for_back)
    {
        cout << i << " ";
    }
    cout << endl;
    copy(v.begin(), v.end(), front_inserter(for_front));
    for(int i : for_front)
    {
        cout << i << " ";
    }
    cout << endl;
    copy(v.begin(), v.end(), inserter(for_insert, for_insert.begin()));
    for(int i : for_insert)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}