#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    vector<string> vs;
    string temp;
    while(getline(cin, temp))
    {
        vs.push_back(temp);
    }
    for(auto it = vs.begin(); it != vs.end(); it++)
    {
        for(auto cit = (*it).begin(); cit != (*it).end(); cit++)
        {
            *cit = toupper(*cit);
        }
    }
    for(auto it = vs.begin(); it != vs.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}