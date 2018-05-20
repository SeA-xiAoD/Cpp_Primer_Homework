#include <iostream>
#include "Ex_7_2.h"

using namespace std;

int main()
{
    Sales_data total;
    if(cin >> total.bookNo)
    {
        cin >> total.units_sold;
        cin >> total.revenue;
        Sales_data trans;
        while(cin >> trans.bookNo)
        {
            cin >> trans.units_sold;
            cin >> trans.revenue;
            if(total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << trans.units_sold << " " << trans.revenue << endl;
    }
    else
    {
        cout << "No data!" << endl;
    }
    return 0;
}