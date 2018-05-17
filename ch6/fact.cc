#include <iostream>

using namespace std;

int fact(int k)
{
    int sum = 1;
    for(int i = 2; i <= k; i++)
        sum *= i;
    return sum;
}

void fact()
{
    cout << "Input a number:" << endl;
    int k = 1;
    cin >> k;
    int sum = 1;
    for(int i = 2; i <= k; i++)
        sum *= i;
    cout << sum << endl;
}

void abs_func(int k)
{
    cout << abs(k) << endl;
}
