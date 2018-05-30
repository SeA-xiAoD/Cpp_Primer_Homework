#include <string>
#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<string, string> author_book;
    string temp_author, temp_book;
    while(cin >> temp_author)
    {
        cin >> temp_book;
        author_book.insert(make_pair(temp_author, temp_book));
    }
    for(auto t : author_book)
    {
        cout << "Author: " << t.first << "    Book: " << t.second << endl;
    }
    return 0;
}