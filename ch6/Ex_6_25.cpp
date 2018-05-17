#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    string s = string(argv[1]);
    s += string(argv[2]);
    cout << s << endl;
    return 0;
}