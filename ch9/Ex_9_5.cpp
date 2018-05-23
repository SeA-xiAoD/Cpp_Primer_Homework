#include <iostream>
#include <vector>

using namespace std;

vector<int>::const_iterator search(vector<int>::const_iterator begin, vector<int>::const_iterator end, int n)
{
    while(begin != end)
    {
        if(*begin == n)
            return begin;
        ++begin;
    }
    return end;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>::const_iterator ci = search(v.cbegin(), v.cend(), 11);
    if(ci == v.end())
        cout << "Do not find the number!" << endl;
    else
        cout << *ci << endl;
    return 0;
}