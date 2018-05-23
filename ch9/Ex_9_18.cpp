#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    string word;
    deque<string> d;
    while(cin >> word)
    {
        d.push_back(word);
    }
    for(auto it = d.begin(); it != d.end(); it++)
        cout << *it << endl;
    return 0;
}