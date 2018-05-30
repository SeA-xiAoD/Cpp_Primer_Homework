#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    map<string, pair<string, string> > family;
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
                    string temp_s;
                    cin >> temp_s;
                    family[temp] = make_pair(new_temp,temp_s);
                }
            }

        }
    }
    for(auto f : family)
    {
        cout << f.first << ":" << endl;
        cout << f.second.first << " " << f.second.second << endl;
    }
    return 0;
}