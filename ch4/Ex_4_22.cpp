#include <iostream>

using namespace std;

int main()
{
    int grade;
    cin >> grade;
    string finalgrade = (grade >= 90) ? "high pass" 
                        : (grade >= 75) ? "pass" 
                        : (grade >= 60) ? "low pass" : "fail";
/*
    if(grade >= 90)
    {
        finalgrade = "high pass";
    }
    else if (grade >= 75)
    {
        finalgrade = "pass";
    }
    else if (grade >= 60)
    {
        finalgrade = "low pass";
    }
    else
    {
        finalgrade = "fail";
    }
*/

    cout << finalgrade << endl;
    return 0;
}