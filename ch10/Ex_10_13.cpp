#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool judgeLength(const string& s)
{
    return s.size() >= 5;
}

int main()
{
    vector<string> vs{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    auto last = partition(vs.begin(), vs.end(), judgeLength);
    for(auto it = vs.begin(); it != last; it++)
    {
        cout << *it << endl;
    }
    return 0;
}