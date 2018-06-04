#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main()
{
    allocator<string> alloc;
    string* p = alloc.allocate(10);
    string temp, *q = p;
    while(cin >> temp)
    {
        alloc.construct(q++, temp);
    }
    unsigned size = q - p;
    for(int i = 0; i < size; i++)
        cout << *(p + i) << endl;
    while(q != p)
    {
        alloc.destroy(--q);
    }
    alloc.deallocate(p, 10);
    return 0;
}