#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6};
    list<int> l{1, 2, 3, 4, 5};
    bool flag = true;
    auto v_head = v.begin();
    auto v_end = v.end();
    auto l_head = l.begin();
    auto l_end = l.end();
    while(v_head != v_end)
    {
        if(*v_head != *l_head)
        {
            flag = false;
            break;
        }
        else
        {
            ++v_head;
            ++l_head;
            if(v_head == v_end && l_head == l_end)
                break;
            else if(l_head == l_end)
            {
                flag = false;
                break;
            }
        }
    }
    cout << flag << endl;
    return 0;
}