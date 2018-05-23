#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{0, 0, 0};
    cout << v.size() << " / " << v.capacity() << endl;
    for(int i = 0; i < 4; i++)
    {
        v.push_back(0);
    }
    cout << v.size() << " / " << v.capacity() << endl;
    for(int i = 0; i < 10; i++)
    {
        v.push_back(0);
    }
    cout << v.size() << " / " << v.capacity() << endl;
    return 0;
}