#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isShorter(const string& s1, const string& s2)
{
    return s1.size() < s2.size();
}

void elimDups(vector<string>& words)
{
    sort(words.begin(), words.end());
    auto to_delete = unique(words.begin(), words.end());
    words.erase(to_delete, words.end());
}

int main()
{
    vector<string> vs{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    elimDups(vs);
    stable_sort(vs.begin(), vs.end(), isShorter);
    for(string s : vs)
        cout << s << endl;
    return 0;
}