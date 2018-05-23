#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main()
{
    list<int> l{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> d_odd;
    deque<int> d_even;
    for(auto num : l)
    {
        if(num % 2 == 0)
            d_even.push_back(num);
        else
            d_odd.push_back(num);
    }
    cout << "Odd:" << endl;
    for(auto num : d_odd)
        cout << num << endl;
    cout << "Even:" << endl;
    for(auto num : d_even)
        cout << num << endl;    
    return 0;
}