#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string temp;
    vector<string> vs;
    while(cin >> temp)
        vs.push_back(temp);
    int c = count_if(vs.begin(), vs.end(), \
        [](const string&s){ return s.size() > 6; });
    cout << c << endl;
    return 0;
}