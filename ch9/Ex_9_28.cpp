#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

void func(forward_list<string>& flst, string for_find, string for_insert)
{
    auto curr = flst.begin();
    bool flag = false; // using to record weather the string was inserted
    while(curr != flst.end())
    {
        if(*curr == for_find)
        {
            curr = flst.insert_after(curr, for_insert);
            flag = true;
        }
        ++curr;
    }
    if(flag == false)
        flst.insert_after(flst.end(), for_insert);
}

int main()
{
    forward_list<string> flst{"456", "123", "456", "789", "456"};
    func(flst, "456", "INSERT");
    for(string s : flst)
        cout << s << endl;
    return 0;
}