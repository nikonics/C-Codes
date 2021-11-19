#include <iostream>
using namespace std;

int main ()
{
    int digit1, digit2;
    char selection;

    cout << "======================="<<endl;
    cout << "Enter Number 1: ";
    cin >> digit1;
    cout << "Enter Number 2: ";
    cin >> digit2;
    cout << "======================="<<endl;
    cout << "\n\n";

    cout << "** Type Any Operator you want to use **\n\n";
    cout << "[+]: Addition"<<endl;
    cout << "[-]: Subtraction"<<endl;
    cout << "[*]: Multiplication"<<endl;
    cout << "[/]: Division\n"<<endl;
    cout << "Type an Operator: ";
    cin >> selection;

    cout <<"\n\n";

    switch (selection) {
    case '+':
        cout << "Result: " << (digit1 + digit2);
        break;

    case '-':
        cout << "Result: " << (digit1 - digit2);
        break;

    case '*':
        cout << "Result: " << (digit1 * digit2);
        break;

    case '/':
        cout << "Result: " << (digit1 / digit2);
        break;

    default:
        cout << "[ " <<selection << " ]" << " is an Invalid!"<<endl;
    }

// Nics Kirschtein //

return 0;
}
