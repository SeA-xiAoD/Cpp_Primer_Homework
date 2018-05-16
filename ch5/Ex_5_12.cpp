#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "aeiou\t \nfifffl";
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
            case ' ':
            case '\n':
            case '\t':
                count++;
                break;
            case 'f':
                if(i != s.length() - 1)
                {
                    switch(s[i + 1]){
                        case 'f':
                        case 'l':
                        case 'i':
                            count++;
                            i++;
                    }
                }
        }
    }
    cout << count << endl;
    return 0;
}