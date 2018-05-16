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
        switch(s[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
                break;
        }
    }
    cout << count << endl;
    return 0;
}