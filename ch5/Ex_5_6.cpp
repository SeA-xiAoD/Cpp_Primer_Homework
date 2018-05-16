#include <iostream>

using namespace std;

int main()
{
    int score = 0;
    string lettergrade = "";
    cout << "Input your score: ";
    cin >> score;
    (score == 100) ? lettergrade = "A++" :
    (score >= 90 && score < 100) ? lettergrade = "A" :
    (score >= 80 && score < 90) ? lettergrade = "B" :
    (score >= 70 && score < 80) ? lettergrade = "C" :
    (score >= 60 && score < 70) ? lettergrade = "D" :
    (score >= 0 && score < 60) ? lettergrade = "F" : lettergrade = "Unknown";
    if (lettergrade == "Unknown")
    {
        cout << "Input is not in scope!" << endl;
        return 1;
    }
    cout << "Your level is " << lettergrade << "!" << endl;
    return 0;
}