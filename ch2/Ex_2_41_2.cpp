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
    Sales_data temp, sum;
    cin >> sum.bookName >> sum.bookID >> sum.units_sold >> sum.price;
    sum.revenue = sum.units_sold * sum.price;
    while(cin >> temp.bookName >> temp.bookID >> temp.units_sold >> temp.price)
    {
        if(sum.bookID == temp.bookID && sum.bookName == temp.bookName)
        {
            sum.units_sold += temp.units_sold;
            sum.revenue += temp.price * temp.units_sold;
            sum.price = sum.revenue / sum.units_sold;
        }
        else
        {
            cout << "Book Name: " << sum.bookName << endl;
            cout << "Book ID: " << sum.bookID << endl;
            cout << "Sale Count: " << sum.units_sold << endl;
            cout << "Price: " << sum.price << endl;
            cout << "Total revenue: " << sum.revenue << endl;
            break;
        }
    }
    return 0;
}