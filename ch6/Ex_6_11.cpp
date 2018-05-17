#include <iostream>
#include <string>

using namespace std;

void reset(string& s)
{
    s = "456";
}

int main()
{
    string s = "123";
    cout << s << endl;
    reset(s);
    cout << s << endl;
}