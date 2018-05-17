#include <iostream>

using namespace std;

void print(const int i)
{
    cout << i << endl;
}

void print(const int i[2])
{
    cout << i[0] << " " << i[1] << endl;
}

int main()
{
    int i = 0, j[2] = {0, 1};
    print(i);
    print(j);
    return 0;
}