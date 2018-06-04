#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

void input_func(shared_ptr<vector<int> > pvi, istream& input)
{
    int temp;
    while(input >> temp)
        pvi->push_back(temp);
}

void output_func(shared_ptr<vector<int> > pvi, ostream& output)
{
    for(auto i : *pvi)
        output << i << " ";
    output << endl;
}

int main()
{
    shared_ptr<vector<int> > pvi = make_shared<vector<int> >();
    input_func(pvi, cin);
    output_func(pvi, cout);
    return 0;
}