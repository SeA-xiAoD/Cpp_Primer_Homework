#include <iostream>

using namespace std;

int main()
{
    int i = 5;
    double d = 2.1;
    i *= static_cast<int>(d);
    cout << i << endl;
    return 0;
}