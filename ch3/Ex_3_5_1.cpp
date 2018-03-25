#include <iostream>

using namespace std;

int main()
{
    string sum, temp;
    cin >> sum;
    while (cin >> temp)
    {
        sum += temp;
    }
    cout << sum << endl;
    return 0;
}