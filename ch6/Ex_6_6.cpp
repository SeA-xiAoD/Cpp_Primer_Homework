#include <iostream>

using namespace std;

void func()
{
    static int static_k = 0;
    cout << static_k++ << endl;;
}

int main()
{
    int a = 100;
    cout << "a = " << a << endl;
    {
        int a = 1;
        cout << "a = " << a << endl;
    }
    cout << "a = " << a << endl;

    for(int i = 0; i < 10; i++)
        func();
        
    return 0;
}