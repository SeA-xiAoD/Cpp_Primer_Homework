#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vi;
    istream_iterator<int> input_iter(cin), eof;
    copy(input_iter, eof, back_inserter(vi));
    for(int i : vi)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(vi.begin(), vi.end());
    ostream_iterator<int> output_iter(cout, " ");
    unique_copy(vi.begin(), vi.end(), output_iter);
    cout << endl;
    return 0;
}