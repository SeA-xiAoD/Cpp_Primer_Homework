#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int j = 1;
    int *p = &i;
    p = nullptr;
    p = &j;
    cout << *p << endl;   
    return 0;
}