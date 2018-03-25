#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vi;
    int temp;
    while(cin >> temp)
    {
        vi.push_back(temp);
    }
    if(vi.size() >= 2)
    {
        for (size_t i = 0; i < vi.size() - 1; i++)
        {
            cout << vi[i] + vi[i + 1] << endl;
        }
    }
    else
    {
        cout << "Do not have enough number!" << endl;
    }
    return 0;
}