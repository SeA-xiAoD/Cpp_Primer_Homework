#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, unsigned> count_map;
    string temp;
    while(cin >> temp)
        ++count_map[temp];
    for(auto m : count_map)
        cout << m.first << " occured " << m.second << " times." << endl;
    return 0;
}