#include <iostream>
#include <string>
using namespace std;

int main ()
{

    // DESIGN //
    char *A = "--------------------------------------------------";
    char *B = "\n    ---------------------------------------         ";

    // DECLARATION and FUNCTIONS //

    char meal1[]="Bicol Express ", meal2[]="Adobong Manok", meal3[]="Beef Steak";
    char chicken1[]="Thigh", chicken2[]="Breast", chicken3[]="Wings", chicken4[]="Drum Stick";
    char burger1[]="Hambuger", burger2[]="Cheeseburger", burger3[]="Chickenburger";
    char snacks1[]="Siomai", snacks2[]="French Fries", snacks3[]="Hotdog Rolls";
    char desert1[]="Macaroni Salad", desert2[]="Mango Float", desert3[]="Sundae";
    char drinks1[]="Coke",drinks2[]="Sprite",drinks3[]="Mountain Dew";
    ;
    char beginning;
    int choice=6, option, quantity;

    bool login = true;
    string user;
    string pass;


    cout << A;
    cout << "\n              FOOD DELIVERY APP        ";
    cout << "\n";
    cout << A;

    cout << "\n";
    cout << B;
    cout << "\n     [!] You must Login First to order [!]";
    cout << B;
    cout << "\n\n";

    // LOGIN FORM //




while (login) {
    cout << "         Username: ";
    cin >> user;
    cout << "         Password: ";
    cin >> pass;

      if (user == "nics" && pass == "123") {
           cout << "\n";
	       cout << "     ***Successfully Logged in!***\n\n";
	       login = login;
	       break;
      }
      else{
           cout << "\n\n";
           cout << "     [!} Invalid Credentials! Please Try Again";
           cout << "\n\n";
          }

      }
            {
                   starting:
                   system("CLS");
                   cout << "\n\n";
                   cout << B;
                   cout << "\n      :[ Welcome To Food Delivery App ]: ";
                   cout << B <<endl;
                   cout << "               .:. MENU .:.\n\n";
                   cout << "     [1] Meals"<<endl;
                   cout << "     [2] Fried Chickens"<<endl;
                   cout << "     [3] Burgers"<<endl;
                   cout << "     [4] Snacks"<<endl;
                   cout << "     [5] Deserts"<<endl;
                   cout << "     [6] Drinks"<<endl;

                   cout << "\n    Please Enter your Choice: ";
                   cin >> choice;

                       if (choice == 1) {
                       cout << "\n\n";
                       cout << "               .:: MEALS MENU ::. "<<endl;
                       cout << "\n";
                       cout << "      1) "<< meal1 <<"                 (50 PHP) \n";
                       cout << "      2) "<< meal2 <<"                 (55 PHP) \n";
                       cout << "      3) "<< meal3 <<"                 (65 PHP) \n";

                       cout << "\n      What do you like to order?: ";
                       cin >> option;
                       if (option >=1 && option <=3) {
                       cout << "\n       Please Enter Quantity: ";
                       cin >> quantity;

                       cout << "\n\n";

                                system ("cls");
                                switch (option)
                                {
                                     case 1:
                                         choice = 50*quantity;
                                         cout<<"\      [!] --- Your Order --- [!]\n\n";
                                         cout<<" "<< quantity <<" "<<meal1;
                                         cout<<"       Your Total Bill is: "<< choice;
                                         cout<<"\n\n       .:: Thank you for ordering! ::.";;
                                          break;
                                     case 2:
                                        choice = 55*quantity;
                                        cout<<"       [!] --- Your Order --- [!]\n\n";
                                        cout<<" "<< quantity <<" "<<meal2;
			                            cout<<"       Your Total Bill is: "<< choice;
			                            cout<<"\n\n        .:: Thank you for ordering! ::.";
                                          break;
                                     case 3:
                                         choice = 65*quantity;
                                         cout<<"       [!] --- Your Order --- [!]\n\n";
			                             cout<<" "<< quantity<<" "<<meal3;
			                             cout<<"       Your Total Bill is: "<< choice;
			                             cout<<"\n\n       .:: Thank you for ordering! ::.";
                                          break;

                                }
                                   cout << "\n\n\n\n";
                                    cout << "Would you like to order anything else? Y / N:";
			                        cin >> beginning;
			                        if(beginning=='Y' || beginning=='y'){
                                    goto starting;
			                        }
                       }

                       else {
                            system ("cls");
                        cout << "\n\n\n\n";
                                    cout << "Invalid Choices! Retry Again? [Y / N]: ";
			                        cin >> beginning;
			                        if(beginning=='Y' || beginning=='y'){
                                    goto starting;
                       }
                }
            }
                       else if (choice == 2) {
                       cout << "\n\n";
                       cout << "               .:: FRIED CHICKEN MENU ::. "<<endl;
                       cout << "\n";
                       cout << "      1) "<< chicken1 <<"              (50 PHP) \n";
                       cout << "      2) "<< chicken2 <<"              (50 PHP) \n";
                       cout << "      3) "<< chicken3 <<"              (45 PHP) \n";
                       cout << "      4) "<< chicken4 <<"              (45 PHP) \n";

                       cout << "\n      What do you like to order?: ";
                       cin >> option;
                       if (option >=1 && option <=4)
                       {
                       cout << "\n       Please Enter Quantity: ";
                       cin >> quantity;

                       cout << "\n\n";

                                system ("cls");
                                switch (option)
                                {
                                     case 1:
                                         choice = 50*quantity;
                                         cout<<"\      [!] --- Your Order --- [!]\n\n";
                                         cout<<" "<< quantity << " " << chicken1;
                                         cout<<"       Your Total Bill is: "<< choice;
                                         cout<<"\n\n       .:: Thank you for ordering! ::.";;
                                          break;
                                     case 2:
                                        choice = 50*quantity;
                                        cout<<"       [!] --- Your Order --- [!]\n\n";
                                        cout<<" "<< quantity <<" "<<chicken2;
			                            cout<<"       Your Total Bill is: "<< choice;
			                            cout<<"\n\n        .:: Thank you for ordering! ::.";
                                          break;
                                     case 3:
                                         choice = 45*quantity;
                                         cout<<"       [!] --- Your Order --- [!]\n\n";
			                             cout<<" "<< quantity<<" "<<chicken3;
			                             cout<<"       Your Total Bill is: "<< choice;
			                             cout<<"\n\n       .:: Thank you for ordering! ::.";
                                     case 4:
                                         choice = 45*quantity;
                                         cout<<"       [!] --- Your Order --- [!]\n\n";
			                             cout<<" "<< quantity<<" "<<chicken4;
			                             cout<<"       Your Total Bill is: "<< choice;
			                             cout<<"\n\n       .:: Thank you for ordering! ::.";
                                          break;

                                }
                                   cout << "\n\n\n\n";
                                    cout << "Would you like to order anything else? Y / N:";
			                        cin >> beginning;
			                        if(beginning=='Y' || beginning=='y'){
                                    goto starting;
			                        }
                       }
                       else {
                            system ("cls");
                        cout << "\n\n\n\n";
                                    cout << "Invalid Choices! Retry Again? [Y / N]: ";
			                        cin >> beginning;
			                        if(beginning=='Y' || beginning=='y'){
                                    goto starting;
			                        }
                }
            }
                       else if (choice == 3) {
                       cout << "\n\n";
                       cout << "               .:: BURGER MENU ::. "<<endl;
                       cout << "\n";
                       cout << "      1) "<< burger1 <<"              (39 PHP) \n";
                       cout << "      2) "<< burger2 <<"              (47 PHP) \n";
                       cout << "      3) "<< burger3 <<"              (55 PHP) \n";

                       cout << "\n      What do you like to order?: ";
                       cin >> option;
                       if (option >=1 && option <=3) {
                       cout << "\n       Please Enter Quantity: ";
                       cin >> quantity;

                       cout << "\n\n";

                                system ("cls");
                                switch (option)
                                {
                                     case 1:
                                         choice = 39*quantity;
                                         cout<<"\      [!] --- Your Order --- [!]\n\n";
                                         cout<<" "<< quantity << " " << burger1;
                                         cout<<"       Your Total Bill is: "<< choice;
                                         cout<<"\n\n       .:: Thank you for ordering! ::.";;
                                          break;
                                     case 2:
                                        choice = 47*quantity;
                                        cout<<"       [!] --- Your Order --- [!]\n\n";
                                        cout<<" "<< quantity <<" "<< burger2;
			                            cout<<"       Your Total Bill is: "<< choice;
			                            cout<<"\n\n        .:: Thank you for ordering! ::.";
                                          break;
                                     case 3:
                                         choice = 55*quantity;
                                         cout<<"       [!] --- Your Order --- [!]\n\n";
			                             cout<<" "<< quantity<<" "<<burger3;
			                             cout<<"       Your Total Bill is: "<< choice;
			                             cout<<"\n\n       .:: Thank you for ordering! ::.";

                                }
                                   cout << "\n\n\n\n";
                                    cout << "Would you like to order anything else? Y / N:";
			                        cin >> beginning;
			                        if(beginning=='Y' || beginning=='y'){
                                    goto starting;
			                        }
                       }
                       else {
                            system ("cls");
                        cout << "\n\n\n\n";
                                    cout << "Invalid Choices! Retry Again? [Y / N]: ";
			                        cin >> beginning;
			                        if(beginning=='Y' || beginning=='y'){
                                    goto starting;
			                        }
                       }
                }

                       else if (choice == 4) {
                       cout << "\n\n";
                       cout << "               .:: SNACKS MENU ::. "<<endl;
                       cout << "\n";
                       cout << "      1) "<< snacks1 <<"              (25 PHP) \n";
                       cout << "      2) "<< snacks2 <<"              (35 PHP) \n";
                       cout << "      3) "<< snacks3 <<"              (20 PHP) \n";

                       cout << "\n      What do you like to order?: ";
                       cin >> option;
                       if (option >=1 && option <=3) {
                       cout << "\n       Please Enter Quantity: ";
                       cin >> quantity;

                       cout << "\n\n";

                                system ("cls");
                                switch (option)
                                {
                                     case 1:
                                         choice = 25*quantity;
                                         cout<<"\      [!] --- Your Order --- [!]\n\n";
                                         cout<<" "<< quantity << " " << snacks1;
                                         cout<<"       Your Total Bill is: "<< choice;
                                         cout<<"\n\n       .:: Thank you for ordering! ::.";;
                                          break;
                                     case 2:
                                        choice = 35*quantity;
                                        cout<<"       [!] --- Your Order --- [!]\n\n";
                                        cout<<" "<< quantity <<" "<< snacks2;
			                            cout<<"       Your Total Bill is: "<< choice;
			                            cout<<"\n\n        .:: Thank you for ordering! ::.";
                                          break;
                                     case 3:
                                         choice = 20*quantity;
                                         cout<<"       [!] --- Your Order --- [!]\n\n";
			                             cout<<" "<< quantity<<" "<<snacks3;
			                             cout<<"       Your Total Bill is: "<< choice;
			                             cout<<"\n\n       .:: Thank you for ordering! ::.";

                                }
                                   cout << "\n\n\n\n";
                                    cout << "Would you like to order anything else? Y / N:";
			                        cin >> beginning;
			                        if(beginning=='Y' || beginning=='y'){
                                    goto starting;
			                        }
                       }
                       else {
                            system ("cls");
                        cout << "\n\n\n\n";
                                    cout << "Invalid Choices! Retry Again? [Y / N]: ";
			                        cin >> beginning;
			                        if(beginning=='Y' || beginning=='y'){
                                    goto starting;
			                        }
                    }
            }
                    else if (choice == 5) {
                       cout << "\n\n";
                       cout << "               .:: DESERTS MENU ::. "<<endl;
                       cout << "\n";
                       cout << "      1) "<< desert1 <<"              (55 PHP) \n";
                       cout << "      2) "<< desert2 <<"              (55 PHP) \n";
                       cout << "      3) "<< desert3 <<"              (55 PHP) \n";

                       cout << "\n      What do you like to order?: ";
                       cin >> option;
                       if (option >=1 && option <=3) {
                       cout << "\n       Please Enter Quantity: ";
                       cin >> quantity;

                       cout << "\n\n";

                                system ("cls");
                                switch (option)
                                {
                                     case 1:
                                         choice = 55*quantity;
                                         cout<<"\      [!] --- Your Order --- [!]\n\n";
                                         cout<<" "<< quantity << " " << desert1;
                                         cout<<"       Your Total Bill is: "<< choice;
                                         cout<<"\n\n       .:: Thank you for ordering! ::.";;
                                          break;
                                     case 2:
                                        choice = 55*quantity;
                                        cout<<"       [!] --- Your Order --- [!]\n\n";
                                        cout<<" "<< quantity <<" "<< desert2;
			                            cout<<"       Your Total Bill is: "<< choice;
			                            cout<<"\n\n        .:: Thank you for ordering! ::.";
                                          break;
                                     case 3:
                                         choice = 55*quantity;
                                         cout<<"       [!] --- Your Order --- [!]\n\n";
			                             cout<<" "<< quantity<<" "<<desert3;
			                             cout<<"       Your Total Bill is: "<< choice;
			                             cout<<"\n\n       .:: Thank you for ordering! ::.";

                                }
                                   cout << "\n\n\n\n";
                                    cout << "Would you like to order anything else? Y / N:";
			                        cin >> beginning;
			                        if(beginning=='Y' || beginning=='y'){
                                    goto starting;
			                        }
                       }
                       else {
                            system ("cls");
                        cout << "\n\n\n\n";
                                    cout << "Invalid Choices! Retry Again? [Y / N]: ";
			                        cin >> beginning;
			                        if(beginning=='Y' || beginning=='y'){
                                    goto starting;
			                        }
                    }
            }
                     else if (choice == 6) {
                       cout << "\n\n";
                       cout << "               .:: DRINKS MENU ::. "<<endl;
                       cout << "\n";
                       cout << "      1) "<< drinks1 <<"              (30 PHP) \n";
                       cout << "      2) "<< drinks2 <<"              (30 PHP) \n";
                       cout << "      3) "<< drinks3 <<"              (30 PHP) \n";

                       cout << "\n      What do you like to order?: ";
                       cin >> option;
                       if (option >=1 && option <=3) {
                       cout << "\n       Please Enter Quantity: ";
                       cin >> quantity;

                       cout << "\n\n";

                                system ("cls");
                                switch (option)
                                {
                                     case 1:
                                         choice = 30*quantity;
                                         cout<<"\      [!] --- Your Order --- [!]\n\n";
                                         cout<<" "<< quantity << " " << drinks1;
                                         cout<<"       Your Total Bill is: "<< choice;
                                         cout<<"\n\n       .:: Thank you for ordering! ::.";;
                                          break;
                                     case 2:
                                        choice = 30*quantity;
                                        cout<<"       [!] --- Your Order --- [!]\n\n";
                                        cout<<" "<< quantity <<" "<< drinks2;
			                            cout<<"       Your Total Bill is: "<< choice;
			                            cout<<"\n\n        .:: Thank you for ordering! ::.";
                                          break;
                                     case 3:
                                         choice = 30*quantity;
                                         cout<<"       [!] --- Your Order --- [!]\n\n";
			                             cout<<" "<< quantity<<" "<<drinks3;
			                             cout<<"       Your Total Bill is: "<< choice;
			                             cout<<"\n\n       .:: Thank you for ordering! ::.";

                                }
                                   cout << "\n\n\n\n";
                                    cout << "Would you like to order anything else? Y / N: ";
			                        cin >> beginning;
			                        if(beginning=='Y' || beginning=='y'){
                                    goto starting;
			                        }
                       }
                    else {
                            system ("cls");
                        cout << "\n\n\n\n";
                                    cout << "Invalid Choices! Retry Again? [Y / N]: ";
			                        cin >> beginning;
			                        if(beginning=='Y' || beginning=='y'){
                                    goto starting;
                                }
                     }
                }
                       else {
                    system ("cls");
                       cout << "\n\n";
                       cout << "Invalid choices! Restart the app? [Y / N]: !"<<endl;
                       cin>>beginning;
                       if(beginning=='Y' || beginning=='y')

                       goto starting;
                    }
                  }
        return 0;
     }
