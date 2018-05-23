#include <iostream>
#include <list>
#include <vector>
#include <string>

using namespace std;

int main()
{
    list<char*> l{"123", "456", "789"};
    vector<string> v;
    v.assign(l.begin(), l.end());
    for(string s : v)
    {
        cout << s << endl;
    }
    return 0;
}