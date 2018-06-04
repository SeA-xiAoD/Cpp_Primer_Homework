#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main()
{
    ifstream input("data");
    vector<string> text;
    map<string, set<int> > m;
    string line;
    unsigned line_count = 1;
    getline(input, line);
    do
    {
        text.push_back(line);
        stringstream ss(line);
        string temp;
        while(ss >> temp)
            m[temp].insert(line_count);
        ++line_count;
    }while(getline(input, line));
    string quary = "1";
    cout << quary + " occurs " + to_string(m[quary].size()) + " times" << endl;
    for(auto it = m[quary].begin(); it != m[quary].end(); it++)
        cout << "    (line " << to_string(*it) << ") " << text[*it - 1] << endl;
    return 0;
}