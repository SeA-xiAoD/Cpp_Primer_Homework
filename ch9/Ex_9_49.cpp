#include <iostream>
#include <string>

using namespace std;

int main()
{
    string temp;
    string max_word;
    int max_length = 0;
    while(cin >> temp)
    {
        unsigned p = temp.find_first_of("qQWRtTyYUIOPASDFGHJKLZXCVBNMyipdfghjklb");
        if(p == -1 && temp.size() > max_length)
        {
            max_word = temp;
            max_length = temp.size();
        }
    }
    cout << max_word << endl;
    return 0;
}