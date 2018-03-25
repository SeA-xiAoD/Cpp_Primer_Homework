#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (size_t i = 0; i < s.length(); i++)
    {
        s[i] = 'X';
    }
    cout << s << endl;
    return 0;
}