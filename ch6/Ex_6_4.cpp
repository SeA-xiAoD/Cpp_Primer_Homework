#include <iostream>

using namespace std;

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

int main()
{
    fact();
    return 0;
}