#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    do{
        if(s1.length() > s2.length())
            cout << s2 << endl;
        else
            cout << s1 << endl;
    }
    while(cin >> s1 >> s2);
    return 0;
}