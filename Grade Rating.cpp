#include <iostream>
using namespace std;

int main ()
{
    // Nics Kirschtein // 
    
    int grades;
    cout << "Enter Your Exact Grade: "<<endl;
    cin >> grades;

    cout << "You've " << (grades > 75 && grades < 100 ? "Passed!" : "Failed");

    /*if (grades > 75 && grades < 100) {
        cout <<"\n\n";
        cout <<"***You've Passed!***"<<endl;
    else {
        cout << "\n\n";
        cout << "***You've failed!***";
    }*/
return 0;

}
