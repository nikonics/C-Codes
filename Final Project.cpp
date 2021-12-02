#include <iostream>
#include <string>
using namespace std;

int main ()
{

    //DESIGN SECTION
    char *A = "--------------------------------------------------";
    char *B = "\n    -------------------------------------         ";

	
	
    //MAIN INPUT
    int x;
    bool tryagain = false;
    string user;
    string pass;


    cout << A;
    cout << "\n              FOOD DELIVERY APP        ";
    cout << "\n";
    cout << A;

    cout << "\n";
    cout << B;
    cout << "\n    [!] You must Login First to order [!]";
    cout << B;
    cout << "\n\n";

	
	
	
    // LOGIN FORM
do {
    cout << "         Username: ";
    cin >> user;
    cout << "         Password: ";
    cin >> pass;

      if (user == "nics" && pass == "123") {
           cout << "\n";
	       cout << "     ***Successfully Logged in!***\n\n";
	       tryagain = true;
      }

         else if (user == "nics") {
           cout << "\n";
           cout << "     [!] The password is incorrect! Try Again...[!]\n\n";
           cout << "\n";
         }

         else if (pass == "123") {
            cout << "\n";
            cout << "     [!] The username is incorrect! Try Again...[!]\n\n";
           cout << "\n";
            }

	     else {
            cout << "\n";
            cout << "  [!] Invalid username and password! Please Try Again... [!]\n\n";


           cout << "\n";
	     }
 }
 while (!tryagain);


return 0;
}
