#include <iostream>

using namespace std;

struct Sales_data{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

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
            if(total.bookNo == trans.bookNo)
            {
                total.revenue = total.revenue + trans.revenue;
                total.units_sold = trans.units_sold + total.units_sold;
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
