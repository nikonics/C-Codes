#include <iostream>
using namespace std;

int main ()
{

    double math, reed, programming, scitech, rizal, average;

    cout << "Enter Math Grade: ";
    cin >> math;

    cout << "Enter ReEd Grade: ";
    cin >> reed;

    cout << "Enter Programming Grade: ";
    cin >> programming;

    cout << "Enter SciTech Grade: ";
    cin >> scitech;

    cout << "Enter Rizal Grade: ";
    cin >> rizal;

    average = (math + reed + programming + scitech + rizal) / 5;

    cout << "You Average Grade is: "<< average;
    return 0;
}
