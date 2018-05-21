#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct PersonInfo{
    string name;
    vector<string> phones;
};

int main()
{
    string line, word;
    vector<PersonInfo> people;
    ifstream ifs("data");
    istringstream record;
    while(getline(cin, line))
    {
        PersonInfo info;
        record.clear();
        record.str(line);
        while(record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }
    for(const auto& entry : people)
    {
        ostringstream oss;
        oss << entry.name << " ";
        for(const auto& nums : entry.phones)
        {
            oss << nums << " ";
        }
        cout << oss.str() << endl;
    }
    return 0;
}