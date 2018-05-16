#include <iostream>

using namespace std;

int main()
{
    int score = 0;
    string lettergrade = "";
    cout << "Input your score: ";
    cin >> score;
    if(score >= 90 && score < 100)
    {
        lettergrade = "A";
    }
    else if (score >= 80 && score < 90)
    {
        lettergrade = "B";
    }
    else if (score >= 70 && score < 80)
    {
        lettergrade = "C";
    }
    else if (score >= 60 && score < 70) 
    {
        lettergrade = "D";
    }
    else if (score >= 0 && score < 60)
    {
        lettergrade = "F";
    }
    else if (score == 100)
    {
        lettergrade = "A++";
    }
    else
    {
        cout << "Input is not in scope!" << endl;
        return 1;
    }
    cout << "Your level is " << lettergrade << "!" << endl;
    return 0;
}