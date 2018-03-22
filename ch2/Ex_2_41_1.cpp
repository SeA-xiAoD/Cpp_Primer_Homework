#include <iostream>

using namespace std;

struct Sales_data{
    string bookName;
    string bookID;
    unsigned int units_sold;
    float price;
    float revenue;
};

int main()
{
    Sales_data d1, d2;
    cin >> d1.bookName >> d1.bookID >> d1.units_sold >> d1.price;
    cin >> d2.bookName >> d2.bookID >> d2.units_sold >> d2.price;
    d1.revenue = d1.price * d1.units_sold;
    d2.revenue = d2.price * d2.units_sold;
    if(d1.bookName == d2.bookName && d1.bookID == d2.bookID)
    {
        cout << "Book Name: " << d1.bookName << endl;
        cout << "Book ID: " << d1.bookID << endl;
        cout << "Sale Count: " << d1.units_sold + d2.units_sold << endl;
        cout << "Price: " << (d1.revenue + d2.revenue)/(d1.units_sold + d2.units_sold) << endl;
        cout << "Total revenue: " << d1.revenue + d2.revenue << endl;
    }
    else
    {
        cerr << "They are different book!" << endl;
    }
    return 0;
}