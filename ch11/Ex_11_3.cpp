#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, unsigned> count_map;
    string temp;
    while(cin >> temp)
        ++count_map[temp];
    for(auto m : count_map)
        cout << m.first << " occured " << m.second << " times." << endl;
    return 0;
}