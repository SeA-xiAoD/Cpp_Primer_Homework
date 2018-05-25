#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vi{1, 1, 2, 2, 3, 4, 5, 5, 6, 7, 7, 8 ,9 ,10 ,10};
    vector<int> v;
    unique_copy(vi.begin(), vi.end(), back_inserter(v));
    for(int i : v)
    {
        cout << i << endl;
    }
    return 0;
}