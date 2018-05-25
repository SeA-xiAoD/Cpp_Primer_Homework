#include <iostream>
#include <vector>
#include <string>
#include <functional>

using namespace std;

bool shorter(const string& s1, const unsigned sz)
{
    return s1.size() <= sz;
}

int main()
{
    vector<string> vs{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    cout << count_if(vs.begin(), vs.end(), bind(shorter, placeholders::_1, 6)) << endl;
    return 0;
}