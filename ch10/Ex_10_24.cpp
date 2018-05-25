#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

bool compare(const int& i, const string& s)
{
    return i > s.size();
}

int main()
{
    vector<int> vi{1, 2, 3, 4, 5, 6, 7, 9, 10};
    auto pos = find_if(vi.begin(), vi.end(), bind(compare, placeholders::_1, "1234"));
    cout << *pos << endl;
    return 0;
}