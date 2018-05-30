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
        // 1
        v.push_back(make_pair(temp_s, temp_i));
        // 2
        pair<string, int> temp_p1{temp_s, temp_i};
        v.push_back(temp_p1);
        // 3
        pair<string, int> temp_p2 = {temp_s, temp_i};
        v.push_back(temp_p2);
    }
    for(auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}