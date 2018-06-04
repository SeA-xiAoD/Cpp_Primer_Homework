#include <iostream>
#include <memory>

using namespace std;

int main()
{
    char* a = "12345";
    char* b = "6789";
    unique_ptr<char[]> l(new char[(sizeof(a) + sizeof(b)) / sizeof(char)]);
    int count = 0;
    for(int i = 0; i < sizeof(a)/sizeof(char); i++)
    {
        l[count] = a[i];
        count++;
    }
    for(int i = 0; i < sizeof(b)/sizeof(char); i++)
    {
        l[count] = b[i];
        count++;
    }
    return 0;
}