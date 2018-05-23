#include <iostream>
#include <string>

using namespace std;

void func(string& name, string head, string tail)
{
    name.insert(0, head);
    name.append(tail);
}

int main()
{
    string name("Hehe");
    string head("Mr. ");
    string tail(" Jr.");
    func(name, head, tail);
    cout << name << endl;
    return 0;
}