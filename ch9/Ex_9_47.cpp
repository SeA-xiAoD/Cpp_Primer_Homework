#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s("ab2c3d7R4E6");
    unsigned now_pos = 0;
    cout << "Letters:" << endl;
    while(now_pos < s.size())
    {
        int temp = s.find_first_of("qwertyuiopasdfghjklzxcvbnmQWERT\
                                    YUIOPASDFGHJKLZXCVBNM", now_pos);
        if(temp == -1)
            break;
        else if(temp >= now_pos)
        {
            cout << s[temp] << endl;
            now_pos = temp + 1;
        }
        else
            ++now_pos;
    }

    now_pos = 0;
    cout << "Letters:" << endl;
    while(now_pos < s.size())
    {
        int temp = s.find_first_not_of("1234567890", now_pos);
        if(temp == -1)
            break;
        else if(temp >= now_pos)
        {
            cout << s[temp] << endl;
            now_pos = temp + 1;
        }
        else
            ++now_pos;
    }

    return 0;
}