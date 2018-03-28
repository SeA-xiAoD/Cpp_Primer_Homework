#include <iostream>

using namespace std;

int main()
{
    cout << "char:\t\t" << sizeof(char) << endl;
    cout << "int:\t\t" << sizeof(int) << endl;
    cout << "short:\t\t" << sizeof(short) << endl;
    cout << "float:\t\t" << sizeof(float) << endl;
    cout << "double:\t\t" << sizeof(double) << endl;
    cout << "wchar_t:\t" << sizeof(wchar_t) << endl;
    cout << "char16_t:\t" << sizeof(char16_t) << endl;
    cout << "char32_t:\t" << sizeof(char32_t) << endl;
    cout << "long:\t\t" << sizeof(long) << endl;
    cout << "long long:\t" << sizeof(long long) << endl;
    cout << "long double:\t" << sizeof(long double) << endl;
    return 0;
}