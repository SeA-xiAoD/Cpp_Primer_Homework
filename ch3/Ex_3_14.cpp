#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vi;
    int temp = 0;
    while(cin >> temp)
    {
        vi.push_back(temp);
    }
    for(auto i : vi)
    {
        cout << i << endl;
    }
    return 0;
}