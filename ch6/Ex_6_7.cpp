#include <iostream>

using namespace std;

int func()
{
    static int k = 0;
    return k ? k : k++;
}

int main()
{
    for(int i = 0; i < 10; i++)
        cout << func() << endl;
    return 0;
}