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
    int left = 0, right = vi.size() - 1;
    if(right >= 1)
    {
        while(left < right)
        {
            cout << vi[left] + vi[right] << endl;
            ++left;
            --right;
        }
        if(left == right) // The amount of numbers is odd
        {
            cout << vi[left] << endl;
        }
    }
    else
    {
        cout << "Do not have enough number!" << endl;
    }
    return 0;
}