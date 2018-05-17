#include <iostream>
#include <initializer_list> 

using namespace std;

int sum_func(initializer_list<int> l)
{
    int sum = 0;
    for(auto it = l.begin(); it != l.end(); it++)
        sum += *it;
    return sum;
}

int main()
{
    initializer_list<int> list{1, 2, 3, 4};
    cout << sum_func(list) << endl;
    return 0;
}