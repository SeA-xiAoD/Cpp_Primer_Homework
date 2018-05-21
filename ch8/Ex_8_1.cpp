#include <iostream>
#include <string>

using namespace std;

istream& func(istream& is)
{
    string temp;
    while(!is.eof())
    {
        getline(is, temp);
        cout << temp << endl;
    }
    is.clear();
    return is;
}

int main()
{
    func(cin);
    return 0;
}