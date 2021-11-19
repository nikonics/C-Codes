#include <iostream>
#include <string>
using namespace std;

double Squared(double a)
{
    return a * a;

}
double Cube(double b)
{
    return b *= b * b;
}

int main ()
{
    cout << "The Squared of 20 is = " << Squared(20) << endl;
    cout << endl;
    cout << "The Cube of 30 is = " << Cube(30) ;
    return 0;
}
