#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, last_s;
    int flag = 0;
    cin >> last_s;
    while(cin >> s)
    {
        if(s == last_s)
        {
            cout << s << endl;
            flag = 1;
            break;
        }
        last_s = s;
    }
    if(flag == 0)
        cout << "No string is repeated!" << endl;
    return 0;
}