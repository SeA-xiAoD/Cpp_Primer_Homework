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

void biggies(vector<string>& words, vector<string>::size_type sz)
{
    elimDups(words);
    sort(words.begin(), words.end());
    stable_sort(words.begin(), words.end(), \
        [](const string& s1, const string& s2){return s1.size() < s2.size();});
    auto first_long_word = find_if(words.begin(), words.end(), \
        [sz](const string& s){ return s.size() >= sz; });
    for_each(first_long_word, words.end(), \
        [](const string& s){ cout << s << endl; });
}

int main()
{
    vector<string> vs{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    biggies(vs, 4);
    return 0;
}