#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int arr[5], *ptr;
     for (int i = 0; i < 5; i++)
     {
          cout << "Enter a numebr: ";
          cin >> arr[i];
     }
     ptr = arr;
     cout << "You Entered:-" << endl;
     for (int i = 0; i < 5; i++)
     {
          cout << *ptr++ << " ";
     }
     getch();
     return 0;
}