#include <iostream>
#include <string>
#include <algorithm>
#include <list>

using namespace std;

bool compare(const string& s1, const string& s2)
{
    return s1.size() < s2.size();
}

int main()
{
    list<string> l{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    l.sort();
    l.sort(compare);
    l.unique();
    for(string s : l)
        cout << s << endl;
    return 0;
}