#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string Month[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

class Date{

public:
    Date(string s);
    string to_String();

private:
    unsigned year;
    unsigned month;
    unsigned day;

};

Date::Date(string s)
{
    if(isupper(s[0]))
    {
        for(int i = 0; i < 12; i++)
        {
            if(s.find(Month[i]) != -1)
            {
                this->month = i + 1;
                break;
            }
        }
        int temp_pos = s.find_first_of("123456789");
        if(isdigit(s[temp_pos + 1]))
        {
            this->day = stoi(s.substr(temp_pos, 2));
            temp_pos = s.find_first_of("123456789", temp_pos + 2);
        }
        else
        {
            this->day = stoi(s.substr(temp_pos, 1));
            temp_pos = s.find_first_of("123456789", temp_pos + 1);
        }
        this->year = stoi(s.substr(temp_pos));
    }
    else
    {
        int temp_pos = 0;
        if(isdigit(s[temp_pos + 1]))
        {
            this->month = stoi(s.substr(temp_pos, 2));
            temp_pos = s.find_first_of("123456789", temp_pos + 2);
        }
        else
        {
            this->month = stoi(s.substr(temp_pos, 1));
            temp_pos = s.find_first_of("123456789", temp_pos + 1);
        }
        if(isdigit(s[temp_pos + 1]))
        {
            this->day = stoi(s.substr(temp_pos, 2));
            temp_pos = s.find_first_of("123456789", temp_pos + 2);
        }
        else
        {
            this->day = stoi(s.substr(temp_pos, 1));
            temp_pos = s.find_first_of("123456789", temp_pos + 1);
        }
        this->year = stoi(s.substr(temp_pos));
    }
}

string Date::to_String()
{
    return to_string(year) + "." + to_string(month) + "." + to_string(day) + ".";
}


int main()
{
    Date d1("Jan 1 1900");
    cout << d1.to_String() << endl;
    Date d2("January 1,1900");
    cout << d2.to_String() << endl;
    Date d3("1/1/1900");
    cout << d3.to_String() << endl;
    return 0;
}