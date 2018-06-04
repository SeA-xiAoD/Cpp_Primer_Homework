#include <iostream>
#include <string>
#include <vector>

using namespace std;

void input_func(vector<int>* pvi, istream& input)
{
    int temp;
    while(input >> temp)
        pvi->push_back(temp);
}

void output_func(vector<int>* pvi, ostream& output)
{
    for(auto i : *pvi)
        output << i << " ";
    output << endl;
}

int main()
{
    auto* pvi = new vector<int>();
    input_func(pvi, cin);
    output_func(pvi, cout);
    delete pvi;
    pvi = nullptr;
    return 0;
}