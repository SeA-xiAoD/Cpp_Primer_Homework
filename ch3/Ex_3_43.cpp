#include <iostream>

using namespace std;

int main()
{
    int a[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}    
    };
    for(int (&row)[4] : a)
    {
        for(int i : row)
        {
            cout << i << endl;
        }
    }
    cout << endl;

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            cout << a[i][j] << endl;
        }
    }
    cout << endl;

    for (int (*row)[4] = a; row != a + 3; row++)
    {
        for (int *p = row[0]; p != row[0] +4; p++)
        {
            cout << *p << endl;           
        }        
    }
    return 0;
}