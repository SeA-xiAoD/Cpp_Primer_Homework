#include <iostream>
#include <sstream>
#include <string>

using namespace std;

istringstream& func(istringstream& iss)
{
    string temp;
    while(!iss.eof())
    {
        iss >> temp;
        cout << temp << endl;
    }
    iss.clear();
    return iss;
}

int main()
{
    string s = "123 456 678";
    istringstream iss(s);
    func(iss);
    return 0;
}