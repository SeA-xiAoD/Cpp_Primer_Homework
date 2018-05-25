#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void elimDups(vector<string>& words)
{
    sort(words.begin(), words.end());
    auto to_delete = unique(words.begin(), words.end());
    words.erase(to_delete, words.end());
}

bool compareSize(const string& s, int sz)
{
    return s.size() < sz;
}

void biggies(vector<string>& words, vector<string>::size_type sz)
{
    elimDups(words);
    sort(words.begin(), words.end());
    stable_sort(words.begin(), words.end(), \
        [](const string& s1, const string& s2){return s1.size() < s2.size();});
    auto after_last_short_word = partition(words.begin(), words.end(), 
        bind(compareSize, placeholders::_1, sz));
    for_each(after_last_short_word, words.end(), \
        [](const string& s){ cout << s << endl;});
}

int main()
{
    vector<string> vs{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    biggies(vs, 4);
    return 0;
}