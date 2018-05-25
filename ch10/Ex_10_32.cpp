#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include "Sales_item.h"

using namespace std;

bool toCompareIsbn(const Sales_item& s1, const Sales_item& s2)
{
    return s1.isbn() < s2.isbn();
}

bool equalIsbn(const Sales_item& s1, const Sales_item& s2)
{
    return s1.isbn() != s2.isbn();
}

int main()
{
    Sales_item total;
    istream_iterator<Sales_item> input_iter(cin), eof;
    vector<Sales_item> v;
    while(input_iter != eof)
    {
        v.push_back(*input_iter++);
    }
    sort(v.begin(), v.end(), toCompareIsbn);
    auto now_pos = v.begin();
    while(now_pos != v.end())
    {
        auto temp_pos = find_if(now_pos+1, v.end(), bind(equalIsbn, placeholders::_1, *now_pos));
        Sales_item temp = accumulate(now_pos, temp_pos, Sales_item((*now_pos).isbn()));
        now_pos = temp_pos;
        cout << temp << endl;
    }
    return 0;
}