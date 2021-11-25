#include<iostream>
using namespace std;

int main ()
{
    int num;
    int factorial = 1;

    cout << "Enter a Number from 0 to 12: "<<endl;
    cin >> num;

    cout << "\n\n";

    if (num < 0)
    cout << "The Number is out of range, Try again...";
        else if (num > 12)
        cout << "The Number is out of range, Try again...";
    else {
        for (int y=1; y<=num; y++) {
        factorial = factorial * y;
        }
        cout << "Factorial of "<< num << " is "<<factorial;
        }
return 0;
}
