#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    while(i != s.length())
    {
        s[i] = 'X';
        i++;
    }
    cout << s << endl;
    return 0;
}