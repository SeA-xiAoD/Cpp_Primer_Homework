#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a("123");
    string b("456");
    unique_ptr<string> l(new string());
    *l = (a + b);
    cout << *l << endl;
    return 0;
}