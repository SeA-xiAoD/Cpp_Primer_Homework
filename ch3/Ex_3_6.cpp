#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for(char &c : s)
    {
        c = 'X';
    }
    cout << s << endl;
    return 0;
}