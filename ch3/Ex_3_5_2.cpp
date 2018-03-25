#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string s, temp;
    getline(cin, s);
    temp = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(isspace(s[i]) && temp.length() != 0)
        {
            cout << temp << endl;
            temp = "";
        }
        else
        {
            temp += s[i];
        }
    }
    return 0;
}