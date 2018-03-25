#include <iostream>

using namespace std;

int main()
{
    string s, temp;
    cin >> s;
    for(auto &c : s)
    {
        if(!ispunct(c))
        {
            temp += c;
        }
    }
    cout << temp << endl;
    return 0;
}