#include <iostream>
#include <string>

using namespace std;

int main()
{
    string temp;
    cin >> temp;
    unique_ptr<char[]> l(new char[temp.length() + 1]);
    for(int i = 0; i < temp.length(); i++)
    {
        l[i] = temp[i];
    }
    return 0;
}