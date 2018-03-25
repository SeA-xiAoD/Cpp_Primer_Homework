#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vi{1,2,3,4,5,6,7,8,9,10};
    for(auto it = vi.begin(); it != vi.end(); it++)
    {
        *it = *it * *it;
    }
    for(auto it = vi.begin(); it != vi.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}