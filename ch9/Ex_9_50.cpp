#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> vi{"123", "456", "789"};
    int sumi = 0;
    for(auto s : vi)
    {
        sumi += stoi(s);
    }
    cout << sumi << endl;

    vector<string> vf{"123.123", "456.456", "789.789"};
    float sumf = 0;
    for(auto s : vf)
    {
        sumf += stof(s);
    }
    cout << sumf << endl;

    return 0;
}