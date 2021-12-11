#include <iostream>
#include <string>
using namespace std;

int main ()
{

    // DESIGN //
    char *A = "--------------------------------------------------";
    char *B = "\n    ---------------------------------------         ";

    // DECLARATION and FUNCTIONS //

    int ordercode;
    int i=0, quantity, choice;
    int totalquantity[100], order[100], total=0;
    string allorder[100], price[100];

    bool tryagain = false;
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




do {
    cout << "         Username: ";
    cin >> user;
    cout << "         Password: ";
    cin >> pass;


      if (user == "nics" && pass == "123") {
           cout << "\n";
	       cout << "     ***Successfully Logged in!***\n\n";
	       tryagain = true;
          system("CLS");
               {
                   // NESTED INSIDE THE LOGIN FORM //
                   // MENU xD

                   cout << "\n\n";
                   cout << B;
                   cout << "\n      :[ Welcome To Food Delivery App ]: ";
                   cout << B <<endl;
                   cout << "               .:. MENU .:.\n\n";
                   cout << "     [1] Meals"<<endl;
                   cout << "     [2] Fried Chickens"<<endl;
                   cout << "     [3] Burgers"<<endl;
                   cout << "     [4] Snacks"<<endl;
                   cout << "     [5] Deserts "<<endl;
                   cout << "     [6] Drinks"<<endl;

                   cout << "\n    Please Enter your Choice: ";
                   cin >> choice;

                       if (choice == 1) {
                       cout << "\n\n";
                       cout << "               .:: MEALS MENU ::. "<<endl;
                       cout << "\n";
                       cout << "      [1] 1pc. Bicol Express         (50 PHP) \n";
                       cout << "      [2] 1pc. Adobong Manok         (55 PHP) \n";
                       cout << "      [3] 1pc. Beef Steak            (65 PHP) \n";
                       cout << "      [4] 1pc. Pancit at Bihon       (45 PHP) \n";
                       cout << "      [5] 1pc. Bulalo                (60 PHP) \n";

                       cout << "\n      What do you like to order?: ";
                       cin >> ordercode;

                       cout << "\n       Please Enter Quantity:";
                       cin >> quantity;

                                switch (ordercode)
                                {
                                     case 1:
                                          allorder [i] = "        1pc. Thighs";
                                          price [i] = "       50 PHP";
					                      totalquantity [i] = quantity;
					                      order [i] = 50*quantity;
                                          break;
                                     case 2:
                                          allorder	  [i] = "        1pc. Breast";
                                          price		  [i] = "       50 PHP";
					                      totalquantity [i] = quantity;
					                      order    [i] = 50*quantity;
                                          break;
                                     case 3:
                                          allorder [i] = "        1pc. Wings";
                                          price [i] = "       45 PHP";
					                      totalquantity [i] = quantity;
					                      order [i] = 45*quantity;
                                          break;
                                     default:
                                        cout << "\n     ~~Invalid Choices~~"<<ordercode;
                                }
                       }
                       if (choice == 2) {
                       cout << "\n\n";
                       cout << "            .:: FRIED CHICKEN MENU ::. "<<endl;
                       cout << "\n";
                       cout << "      [1] 1pc. Thighs                (50 PHP)\n";
                       cout << "      [2] 1pc. Breast                (50 PHP)\n";
                       cout << "      [3] 1pc. Wings                 (45 PHP)\n";
                       cout << "      [4] 1pc. Drum Stick            (45 PHP)\n";
                       cout << "      [5] 1pc. Thighs with Rice      (60 PHP)\n";
                       cout << "      [6] 1pc. Breast with Rice      (60 PHP)\n";
                       cout << "      [7] 1pc. Breast with Rice      (60 PHP)\n";
                       cout << "      [8] 1pc. Wings with Rice       (60 PHP)\n";
                       cout << "      [9] 1pc. Drum Stick with Rice  (60 PHP)\n";
                       cin >> ordercode;

                                switch (ordercode)
                                {
                                     case 1:
                                          allorder [i] = "        1pc. Thighs";
                                          price [i] = "       50 PHP";
					                      totalquantity [i] = quantity;
					                      order [i] = 50*quantity;

					                      cout << "yawa";
                                          break;
                                     case 2:
                                          allorder	  [i] = "        1pc. Breast";
                                          price		  [i] = "       50 PHP";
					                      totalquantity [i] = quantity;
					                      order    [i] = 50*quantity;
                                          break;
                                     case 3:
                                          allorder [i] = "        1pc. Wings";
                                          price [i] = "       45 PHP";
					                      totalquantity [i] = quantity;
					                      order [i] = 45*quantity;
                                          break;
                                }
                       }
                       if (choice == 3) {
                       cout << "\n\n";
                       cout << "               .:: BURGER MENU ::. "<<endl;
                       cout << "                ** BUY 1 TAKE 1 ** "<<endl;
                       cout << "\n";
                       cout << "      [1] Hamburger                  (36 PHP)\n";
                       cout << "      [2] Cheeseburger               (42 PHP)\n";
                       cout << "      [3] Fish Burger                (53 PHP)\n";
                       cout << "      [4] Veggie Burger              (55 PHP)\n";
                       cout << "      [5] Chicken Burger             (53 PHP)\n";
                       cout << "      [6] Big Burger                 (76 PHP)\n";
                       cin >> ordercode;

                        switch (ordercode)
                                {
                                     case 1:
                                          allorder [i] = "        1pc. Thighs";
                                          price [i] = "       50 PHP";
					                      totalquantity [i] = quantity;
					                      order [i] = 50*quantity;
                                          break;
                                     case 2:
                                          allorder	  [i] = "        1pc. Breast";
                                          price		  [i] = "       50 PHP";
					                      totalquantity [i] = quantity;
					                      order    [i] = 50*quantity;
                                          break;
                                     case 3:
                                          allorder [i] = "        1pc. Wings";
                                          price [i] = "       45 PHP";
					                      totalquantity [i] = quantity;
					                      order [i] = 45*quantity;
                                          break;
                                }
                       }
                       if (choice == 4) {
                       cout << "\n\n";
                       cout << "               .:: SNACKS MENU ::. "<<endl;
                       cout << "\n";
                       cout << "      [1] 5pc. Beef Siomai           (25 PHP)\n";
                       cout << "      [2] 5pc. Pork Siomai           (25 PHP)\n";
                       cout << "      [3] 5pc. Japanese Siomai       (30 PHP)\n";
                       cout << "      [4] French Fries               (35 PHP)\n";
                       cout << "      [5] Hotdog Rolls               (20 PHP)\n";
                       cout << "      [6] Waffles                    (25 PHP)\n";
                       cin >> ordercode;

                       switch (ordercode)
                                {
                                     case 1:
                                          allorder [i] = "        1pc. Thighs";
                                          price [i] = "       50 PHP";
					                      totalquantity [i] = quantity;
					                      order [i] = 50*quantity;
                                          break;
                                     case 2:
                                          allorder	  [i] = "        1pc. Breast";
                                          price		  [i] = "       50 PHP";
					                      totalquantity [i] = quantity;
					                      order    [i] = 50*quantity;
                                          break;
                                     case 3:
                                          allorder [i] = "        1pc. Wings";
                                          price [i] = "       45 PHP";
					                      totalquantity [i] = quantity;
					                      order [i] = 45*quantity;
                                          break;
                                }
                       }
                       if (choice == 5) {
                       cout << "\n\n";
                       cout << "               .:: DESERTS MENU ::. "<<endl;
                       cout << "\n";
                       cout << "      [1] Macaroni Salad             (39 PHP)\n";
                       cout << "      [2] Mango Float                (46 PHP)\n";
                       cout << "      [3] Ice Cream - Chocolate      (20 PHP)\n";
                       cout << "      [4] Milk Tea                   (55 PHP)\n";
                       cin >> ordercode;

                       switch (ordercode)
                                {
                                     case 1:
                                          allorder [i] = "        1pc. Thighs";
                                          price [i] = "       50 PHP";
					                      totalquantity [i] = quantity;
					                      order [i] = 50*quantity;
                                          break;
                                     case 2:
                                          allorder	  [i] = "        1pc. Breast";
                                          price		  [i] = "       50 PHP";
					                      totalquantity [i] = quantity;
					                      order    [i] = 50*quantity;
                                          break;
                                     case 3:
                                          allorder [i] = "        1pc. Wings";
                                          price [i] = "       45 PHP";
					                      totalquantity [i] = quantity;
					                      order [i] = 45*quantity;
                                          break;
                                }
                       }
                       if (choice == 6) {
                       cout << "\n\n";
                       cout << "               .:: DRINKS MENU ::. "<<endl;
                       cout << "\n";
                       cout << "      [1] Coca-Cola                  (25 PHP)\n";
                       cout << "      [2] Sprite                     (25 PHP)\n";
                       cout << "      [3] Pepsi                      (25 PHP)\n";
                       cout << "      [4] Royal                      (25 PHP)\n";
                       cout << "      [5] Mountain Dew               (25 PHP)\n";
                       cin >> ordercode;

                             switch (ordercode)
                                {
                                     case 1:
                                          allorder [i] = "        1pc. Thighs";
                                          price [i] = "       50 PHP";
					                      totalquantity [i] = quantity;
					                      order [i] = 50*quantity;
                                          break;
                                     case 2:
                                          allorder	  [i] = "        1pc. Breast";
                                          price		  [i] = "       50 PHP";
					                      totalquantity [i] = quantity;
					                      order    [i] = 50*quantity;
                                          break;
                                     case 3:
                                          allorder [i] = "        1pc. Wings";
                                          price [i] = "       45 PHP";
					                      totalquantity [i] = quantity;
					                      order [i] = 45*quantity;
                                          break;
                                }

                       }
                       else {
                       cout << "\n\n";
                       cout << "      Invalid choices!"<<endl;
                       }
                   }


        }
         else if (pass == "123") {
            cout << "\n";
            cout << "     [!] The username is incorrect! Try Again...[!]\n\n";
            cout << "\n";
            }
            else if (user == "nics") {
            cout << "\n";
            cout << "     [!] The password is incorrect! Try Again...[!]\n\n";
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
