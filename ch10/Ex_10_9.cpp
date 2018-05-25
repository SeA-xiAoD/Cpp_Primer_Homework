#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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
    for(string s : vs)
        cout << s << endl;
    return 0;
}