#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string s1 = "hello";
    string s2 = "world";
    cout << (s1 == s2 ? "Equal!" : "Not Equal!") << endl;
    char ss1[13] = "hello world!";
    char ss2[13] = "hello world!";
    cout << (strcmp(ss1, ss2) == 0 ? "Equal!" : "Not Equal!") << endl;
    return 0;
}