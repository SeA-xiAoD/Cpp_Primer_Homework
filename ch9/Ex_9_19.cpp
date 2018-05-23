#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    string word;
    list<string> l;
    while(cin >> word)
    {
        l.push_back(word);
    }
    for(auto it = l.begin(); it != l.end(); it++)
        cout << *it << endl;
    return 0;
}