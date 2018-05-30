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
    cout << "You want to erase: ";
    cin >> temp_author;
    auto find_it = author_book.find(temp_author);
    if(find_it != author_book.end())
        author_book.erase(find_it);
    return 0;
}