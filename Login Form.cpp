#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string us;
    string pw;

	cout<<"Enter username, mobile number or email address: "<<endl;
	cin >> us;
    cout<<"Enter password: "<<endl;
    cin >> pw;

  {
       if (us == "nicosejohn@email.com" )
        if (pw == "nics123")
	     {
	       cout<<"Successfully Logged in!"<<endl;
	     }
         else
            {
           cout<<"The password is incorrect! Please Try Again."<<endl;
         }

	     else{
            cout<<"Invalid username and password! Please Try Again."<<endl;
	     }
	     return 0;
  }
    // Nics Kirschtein //
}
