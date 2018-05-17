#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool have_upper(const string& s)
{
    for(auto c : s)
    {
        if(isupper(c))
            return true;
    }
    return false;
}

void to_lower(string& s)
{
    for(auto& c : s)
    {
        c = tolower(c);
    }
}

int main()
{
    string s = "abcDEfg";
    cout << (have_upper(s) ? "True" : "False")<< endl;
    cout << s << endl;
    to_lower(s);
    cout << s << endl;
    return 0;
}