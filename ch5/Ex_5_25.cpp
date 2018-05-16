#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int a = 0, b = 0;
    while(cin >> a >> b)
    {   
        try
        {
            if(b == 0)
                throw runtime_error("Divide Zero!");
            cout << a / b << endl;
            break;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            cout << "Do you want to input new value? (Y/N)" << endl;
            string s;
            cin >> s;
            if(toupper(s[0]) != 'Y')
                break;
        }
    }
    return 0;
}