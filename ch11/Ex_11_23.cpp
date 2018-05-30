#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    multimap<string, vector<string> > child;
    string temp;
    while(cin >> temp)
    {
        if(temp == "q")
            break;
        else
        {
            string temp_name;
            while(cin >> temp_name)
            {
                if(temp_name == "q")
                {
                    break;
                }
                else
                {
                    auto ret = child.insert(make_pair(temp, vector<string>()));
                    ret->second.push_back(temp_name);
                }
            }
        }
    }
    for(auto c : child)
    {
        cout << "Last Name: " << c.first << endl;
        for(auto s : c.second)
        {
            cout << "First Name: " << s << " ";
        }
        cout << endl;
    }
    return 0;
}