#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned int> scores(11, 0);
    unsigned int grade;
    auto begin_it = scores.begin();
    while(cin >> grade)
    {
        if(grade <= 100)
        {
            ++*(begin_it + grade/10);
        }
    }
    for(auto it = scores.begin(); it != scores.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}