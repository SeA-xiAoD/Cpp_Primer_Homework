#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int temp;
    while(cin >> temp)
    {
        if(find(v.begin(), v.end(), temp) == v.end())
            v.push_back(temp);
    }
    for(int i : v)
    {
        cout << i << endl;
    }
    return 0;
}