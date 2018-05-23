#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1};
    cout << v[0] << endl;
    cout << v.at(0) << endl;
    cout << v.front() << endl;
    cout << *v.begin() << endl;

    // 对空vector会报错

    return 0;
}