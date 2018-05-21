#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string temp;
    vector<string> v;
    while(cin >> temp)
    {
        v.push_back(temp);
    }
    for(auto s : v)
        cout << s << endl;
    return 0;
}