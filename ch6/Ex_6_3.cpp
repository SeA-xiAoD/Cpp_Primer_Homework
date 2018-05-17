#include <iostream>

using namespace std;

int fact(int k)
{
    int sum = 1;
    for(int i = 2; i <= k; i++)
        sum *= i;
    return sum;
}

int main()
{
    cout << fact(5) << endl;
    return 0;
}