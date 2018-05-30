#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    map<string, vector<string> > family;
    string temp;
    while(cin >> temp)
    {
        if(temp == "q")
            break;
        else
        {
            string new_temp;
            while(cin >> new_temp)
            {
                if(new_temp == "q")
                    break;
                else
                {
                    family[temp].push_back(new_temp);
                }
            }

        }
    }
    for(auto f : family)
    {
        cout << f.first << ":" << endl;
        for(auto c : f.second)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}