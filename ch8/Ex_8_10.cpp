#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream is("data");
    vector<string> vs;
    string temp;
    while(getline(is, temp))
        vs.push_back(temp);
    for(int i = 0; i < vs.size(); i++)
    {
        istringstream iss(vs[i]);
        while(iss >> temp)
            cout << temp << endl;
    }
    return 0;
}