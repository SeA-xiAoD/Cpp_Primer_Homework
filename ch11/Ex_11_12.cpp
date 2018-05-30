#include <iostream>
#include <utility>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string temp_s;
    int temp_i;
    vector<pair<string, int> > v;
    while(cin >> temp_s)
    {
        cin >> temp_i;
        v.push_back(make_pair(temp_s, temp_i));
    }
    for(auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}