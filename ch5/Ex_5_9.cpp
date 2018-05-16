#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
        {
            count++;
            continue;
        }
        if (s[i] == 'e')
        {
            count++;
            continue;
        }
        if (s[i] == 'i')
        {
            count++;
            continue;
        }
        if (s[i] == 'o')
        {
            count++;
            continue;
        }
        if (s[i] == 'u')
        {
            count++;
            continue;
        }
    }
    cout << count << endl;
    return 0;
}