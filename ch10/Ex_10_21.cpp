#include <iostream>

using namespace std;

int main()
{
    int count = 10;
    auto f = [&count]() -> bool \
        { if(count > 0) { --count; return false;} else return true;};
    bool tag = false;
    while(!tag)
    {
        cout << count << endl;
        tag = f();
    }
    return 0;
}