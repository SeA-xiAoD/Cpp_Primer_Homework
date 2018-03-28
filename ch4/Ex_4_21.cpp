#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vi{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(auto &i : vi)
    {
        (i % 2 == 1) ? i *= i : i;
        cout << i << endl;
    }
    return 0;
}