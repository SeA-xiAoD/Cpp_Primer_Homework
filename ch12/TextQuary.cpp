#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <sstream>
#include <memory>

using namespace std;

class TextQuary{

    friend class QuaryResult;

public:
    TextQuary() {}
    TextQuary(istream& input);
    shared_ptr<map<string, set<int> > > getPointer(){ return m; }

private:
    shared_ptr<vector<string> > text;
    shared_ptr<map<string, set<int> > > m;
};

TextQuary::TextQuary(istream& input) : text(new vector<string>), m(new map<string, set<int> >)
{
    string line;
    unsigned line_count = 1;
    while(getline(input, line))
    {
        text->push_back(line);
        stringstream ss(line);
        string temp;
        while(ss >> temp)
        {
            (*m)[temp].insert(line_count);
        }
        ++line_count;
    }
}

class QuaryResult{

public:
    QuaryResult(const TextQuary&);
    string quary(const string&);
    set<int>::iterator begin(const string& s) { return (*m)[s].begin(); }
    set<int>::iterator end(const string& s) { return (*m)[s].end(); }

private:
    shared_ptr<vector<string> > text;
    shared_ptr<map<string, set<int> > > m;

};

QuaryResult::QuaryResult(const TextQuary& tq)
{
    this->text = tq.text;
    this->m = tq.m;
}

string QuaryResult::quary(const string& s)
{
    auto f = m->find(s);
    if(f == m->end())
    {
        cerr << "String not found!" << endl;
        return "";
    }
    string out = s + " occurs " + to_string((*m)[s].size()) + " times\n";
    for(auto it = (*m)[s].begin(); it != (*m)[s].end(); it++)
    {
        out += "    (line " + to_string(*it) + ") ";
        out += (*text)[*it - 1];
        out += "\n";
    }
    return out;
}

int main()
{
    ifstream input("data");
    TextQuary tq(input);
    QuaryResult qr(tq);
    cout << qr.quary("1") << endl;
    return 0;
}