#include <iostream>
#include <map>
#include <cctype>

using namespace std;

int main()
{
    map<string, unsigned> count_map;
    string temp;
    while(cin >> temp)
    {
        string new_temp = "";
        for(int i = 0; i < temp.size(); i++)
        {
            if(isalnum(temp[i]))
                new_temp += tolower(temp[i]);
        }
        ++count_map[new_temp];
    }
    for(auto m : count_map)
        cout << m.first << " occured " << m.second << " times." << endl;
    return 0;
}