#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if(s1 == s2)
    {
        cout << "Two string is equal." << endl;
    }
    else
    {
        cout << (s1.length() > s2.length() ? s1 : s2) << endl;
    }
    return 0;
}