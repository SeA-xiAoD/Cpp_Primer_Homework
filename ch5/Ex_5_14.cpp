#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, max_s, now_s;
    int max_count = 0; // using to record the max length
    int count = 0; // using to record now_s count
    int max_number_count = 0; // using to record how many s reach the max

    // Processing
    cin >> now_s;
    count++;
    while(cin >> s)
    {
        if(s == now_s)
        {
            count++;
        }
        else
        {
            if(count > max_count)
            {
                max_s = now_s;
                max_count = count;
                count = 1;
                max_number_count = 1;
            }
            else if (count == max_count)
            {
                max_number_count++;
            }
            now_s = s;
        }
    }
    if(count > max_count)
    {
        max_s = now_s;
        max_count = count;
        count = 1;
        max_number_count = 1;
    }
    else if (count == max_count)
    {
        max_number_count++;
    }

    // Output
    if(max_number_count == 1)
    {
        cout << max_s << endl << max_count << endl;
    }
    else
    {
        cout << "No such a string." << endl;
    }
    return 0;
}