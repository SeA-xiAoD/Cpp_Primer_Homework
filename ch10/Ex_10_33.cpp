#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("data");
    ofstream output_odd("odd.txt"), output_even("even.txt");
    istream_iterator<int> input_iter(input), eof;
    ostream_iterator<int> output_odd_iter(output_odd, " "), output_even_iter(output_even, " ");
    while(input_iter != eof)
    {
        int temp = *input_iter++;
        if(temp % 2 == 0)
            output_even_iter = temp;
        else
            output_odd_iter = temp;
    }
    return 0;
}