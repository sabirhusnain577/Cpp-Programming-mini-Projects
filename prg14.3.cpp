#include <iostream>

using namespace std;

int main()
{
     int count = 0;
     for (int i = 1; i <= 4; i++)
     {
          for (int j = 1; j <= 4; j++)
          {
               for (int k = 1; k <= 4; k++)
               {
                    count++;
               }
          }
     }
     cout << count;
     return 0;
}