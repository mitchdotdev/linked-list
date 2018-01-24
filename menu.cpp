#include "main.h"

int menu() {
  int choice;
  bool exit = false;
  string mainMenu = "\n  MENU . . .\n\n  "
                    "[1] Add a record\n\n  "
                    "[2] Delete a record\n\n  "
                    "[3] Display database contents on the screen\n\n  "
                    "[4] Sort data\n\n\n  "
                    "[0] Save and Exit\n\n  Select One: ";
  string subMenu1 = "\n    Delete a record . . .\n\n    "
                    "[1] Select record to delete using class title\n\n    "
                    "[2] Select record to delete using ticket number\n\n    "
                    "Select One: ";
  string subMenu2 = "\n    Display database contents on the screen . . .\n\n   "
                    " [1] Select record to display using class title\n\n    "
                    "[2] Select record to display using ticket number\n\n    "
                    "[3] Display all records\n\n    Select One: ";
  string subMenu3 = "\n    Which sorting method would you like to use . . .\n\n"
                    "    [1] Bubble Sort\n\n"
                    "    [2] Merge Sort\n\n"
                    "    Select One: ";
  string error = "\nERROR . . . Please only enter one of the choices displayed\n";

  while(!exit)
  { cout << mainMenu;
    cin  >> choice;
    if(cin.fail() || choice < 0 || choice > 4)
    {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << error;
    } else if(choice == 2)
    {
      while(!exit)
      {
        cout << subMenu1;
        cin  >> choice;
        if(cin.fail() || choice < 1 || choice > 2)
        {
          cin.clear();
          cin.ignore(1000, '\n');
          cout << error;
        } else
        {
          return choice + 1;
          exit = true;
        }
     }
   } else if(choice == 3)
   {
     while(!exit)
     {
       cout << subMenu2;
       cin  >> choice;
       if(cin.fail() || choice < 1 || choice > 3)
       {
         cin.clear();
         cin.ignore(1000, '\n');
         cout << error;
       } else
       {
         return choice + 3;
       }
     }
   } else if(choice == 4)
   {
     while(!exit)
     {
       cout << subMenu3;
       cin  >> choice;
       if(cin.fail() || choice < 1 || choice > 2)
       {
         cin.clear();
         cin.ignore(1000, '\n');
         cout << error;
       } else
       {
         return choice + 6;
       }
     }
   } else
   {
     exit = true;
   }
  }
  return choice;
}
