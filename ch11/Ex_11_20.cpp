#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, unsigned> count_map;
    string temp;
    while(cin >> temp)
    {
        auto ret = count_map.insert(make_pair(temp, 1));
        if(!ret.second)
            ++ret.first->second;
    }
    for(auto m : count_map)
        cout << m.first << " occured " << m.second << " times." << endl;
    return 0;
}