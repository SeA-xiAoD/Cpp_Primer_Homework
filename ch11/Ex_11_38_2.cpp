#include <iostream>
#include <string>
#include <unordered_map>
#include <fstream>
#include <sstream>

using namespace std;

unordered_map<string, string> buildMap(ifstream& input)
{
    unordered_map<string, string> m;
    string keyword, value;
    while(cin >> keyword)
    {
        getline(input, value);
        m[keyword] = value.substr(1);
    }
    return m;
}

int main()
{
    ifstream input_transform("trans.txt");
    ifstream input("input.txt");
    ofstream output("output.txt");

    auto trans_map = buildMap(input_transform);
    string text;
    while(getline(input, text))
    {
        stringstream temp_input(text);
        string temp_word;
        temp_input >> temp_word;
        output << trans_map[temp_word];
        while(temp_input >> temp_word)
        {
            output << " " << trans_map[temp_word];
        }
        output << endl;
    }

    input_transform.close();
    input.close();
    output.close();
    return 0;
}