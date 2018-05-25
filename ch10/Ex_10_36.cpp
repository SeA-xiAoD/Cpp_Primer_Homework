#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l{1, 0, 0, 1, 0, 1};
    auto find_pos = find(l.crbegin(), l.crend(), 0);
    int count = 0;
    for(auto it = l.cbegin(); it != find_pos.base(); it++)
        ++count;
    cout << "The last 0 is the " << count << "th number." << endl;
    return 0;
}