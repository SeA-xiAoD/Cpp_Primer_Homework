#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a[10];
    int b[10];
    for (size_t i = 0; i < 10; i++)
    {
        if(a[i] != b[i])
        {
            cout << "Not equal!" << endl;
            break;
        }
    }
    vector<int> v1(10, 0);
    vector<int> v2(10, 0);
    cout << (v1 == v2 ? "Equal!" : "Not equal!" )<< endl;
    return 0;
}