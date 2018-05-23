#include <iostream>
#include <string>

using namespace std;

void func(string& s, string oldVal, string newVal)
{
    int old_length = oldVal.size();
    for(int i = 0; i <= s.size() - old_length; i++)
    {
        bool flag = true;
        for(int j = 0; j < old_length; j++)
        {
            if(s[i + j] != oldVal[j])
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
        {
            s.replace(i, old_length, newVal);
            i += old_length;
        }
    }
}

int main()
{
    string s("tho 123 tho 123 tho tho 123 tho");
    string oldVal("tho");
    string newVal("though");
    cout << s << endl;
    func(s, oldVal, newVal);
    cout << s << endl;
    return 0;
}