#include <iostream>
#include <vector>

using namespace std;

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int mul(int a, int b)
{
    return a*b;
}

int divide(int a, int b)
{
    return a/b;
}

int main()
{
    int func(int, int);
    vector<decltype(func)*> v(4);
    v[0] = add;
    v[1] = sub;
    v[2] = mul;
    v[3] = divide;
    cout << v[0](1, 2) << endl;
    cout << v[1](1, 2) << endl;
    cout << v[2](2, 3) << endl;
    cout << v[3](4, 2) << endl;
    return 0;
}