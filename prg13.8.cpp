#include <iostream>

using namespace std;

int main()
{
     int num;
     cout << "Enter a number: ";
     cin >> num;
     switch (num)
     {
     case 1:
          cout << "Value is: " << 1 << endl;
          break;
     case 2:
          cout << "Value is: " << 2 << endl;
          break;
     case 3:
          cout << "Value is: " << 3 << endl;
          break;
     case 4:
          cout << "Value is: " << 4 << endl;
          break;
     case 5:
          cout << "Value is: " << 5 << endl;
          break;

     default:
          cout << "Number is other than 1 to 5" << endl;
     }
     return 0;
}