#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    vector<string> vs;
    string temp;
    while(getline(cin, temp))
    {
        vs.push_back(temp);
    }
    for(auto &s : vs)
    {
        for(auto &c : s)
        {
            c = toupper(c);
        }
    }
    for(auto s : vs)
    {
        cout << s << endl;
    }
    return 0;
}