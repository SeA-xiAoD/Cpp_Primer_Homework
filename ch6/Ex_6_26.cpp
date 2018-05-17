#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	string s;
	for (int i = 1; i != argc; ++i)
		s += string(argv[i]) + " ";
	cout << s << endl;
	return 0;
}