#include <iostream>
#include <vector>

using namespace std;

bool search(vector<int>::const_iterator begin, vector<int>::const_iterator end, int n)
{
    while(begin != end)
    {
        if(*begin == n)
            return true;
        ++begin;
    }
    return false;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << search(v.cbegin(), v.cend(), 6) << endl;
    return 0;
}