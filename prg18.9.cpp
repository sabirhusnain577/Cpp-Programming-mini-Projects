#include <iostream>

using namespace std;

void add(float a, float b, float c)
{
     float d = a + b + c;
     cout <<"Sum is: " <<d << endl;
}

int main()
{
     float num1, num2, num3;
     cout << "Enter three numbers:-" << endl;
     cin >> num1 >> num2 >> num3;
     add(num1, num2, num3);
     return 0;
}
