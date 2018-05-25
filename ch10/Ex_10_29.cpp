#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    istream_iterator<string> input_iter(cin), eof;
    vector<string> vs;
    while(input_iter != eof)
    {
        vs.push_back(*input_iter++);
    }
    for(string s : vs)
    {
        cout << s << endl;
    }
    return 0;
}