#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    list<string> l{"123", "456", "789", "456", "qweqwe", "123123", "456"};
    cout << count(l.begin(), l.end(), "456") << endl;
    return 0;
}