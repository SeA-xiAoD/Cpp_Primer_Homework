#include <iostream>

using namespace std;

int main()
{
    using int_r = int[4];
    int a[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}    
    };
    for(int_r& row : a)
    {
        for(int i : row)
        {
            cout << i << endl;
        }
    }
    return 0;
}