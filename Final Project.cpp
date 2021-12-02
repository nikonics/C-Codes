#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int x;
    string a;
    string user;
    string pass;

    cout << "== [ FOOD DELIVERY APP ] == \n";
    cout << "== You must Login First to order ==\n";
    cout << "\n";

    cout << "Username: ";
    cin >> user;
    cout << "Password: ";
    cin >> pass;


      if (user == "nics" && pass == "123") {
           cout << "\n";
	       cout << "***Successfully Logged in!***\n\n";
      }

         else if (user == "nics") {
           cout << "\n";
           cout << "[!] The password is incorrect! [!]\n\n";
         }

         else if (pass == "123") {
            cout << "\n";
            cout << "[!] The username is incorrect! [!]\n\n";
            }

	     else {
            cout << "\n";
            cout << "[!] Invalid username and password! Please Try Again... [!]\n\n";
	     }


return 0;
}
