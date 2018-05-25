#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Sales_data.h"

using namespace std;

int main()
{
    Sales_data temp;
    vector<Sales_data> vs;
    while(read(cin, temp))
    {
        vs.push_back(temp);
    }
    sort(vs.begin(), vs.end(), \
        [](const Sales_data& s1, const Sales_data& s2) \
        { return s1.isbn() < s2.isbn(); });
    for(auto t : vs)
    {
        print(cout, t);
        cout << endl;
    }
    return 0;
}