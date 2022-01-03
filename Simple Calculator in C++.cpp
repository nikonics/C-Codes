#include <iostream>
using namespace std;

int main ()
{
    int digit1, digit2;
    int selection;
    char beginning;

{
    start:
    system ("cls");
    cout << "======================="<<endl;
    cout << "Enter Number 1: ";
    cin >> digit1;
    cout << "Enter Number 2: ";
    cin >> digit2;
    cout << "======================="<<endl;
    cout << "\n\n";

    cout << "** Type Any Operator you want to use **\n\n";
    cout << " 1) Addition"<<endl;
    cout << " 2) Subtraction"<<endl;
    cout << " 3) Multiplication"<<endl;
    cout << " 4) Division\n"<<endl;

    cout << "Type an Operator: ";
    cin >> selection;

    cout <<"\n\n";
    switch (selection) {
    case 1:
        cout << "Result: " << (digit1 + digit2);
        break;

    case 2:
        cout << "Result: " << (digit1 - digit2);
        break;

    case 3:
        cout << "Result: " << (digit1 * digit2);
        break;

    case 4:
        cout << "Result: " << (digit1 / digit2);
        break;

    default:
        cout << "[ " <<selection << " ]" << " is an Invalid!"<<endl;

}
    cout << "\n\n\n\n";
    cout << "Do you want to try again? [Y / N]: "<<endl;
    cin >> beginning;
    if (beginning == 'Y' || beginning == 'y') {
    goto start;
   }

}

return 0;
}
