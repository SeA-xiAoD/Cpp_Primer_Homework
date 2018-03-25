#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> vi;
    string temp;
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