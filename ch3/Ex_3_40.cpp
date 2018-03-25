#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[7] = "hello ";
    char s2[7] = "world!";
    char s3[13];
    strcpy(s3, s1);
    strcat(s3, s2);
    cout << s3 << endl;
    return 0;
}