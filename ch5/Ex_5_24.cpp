#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0;
    cin >> a >> b;
    if(b == 0)
        throw runtime_error("Divide Zero!");
    return 0;
}