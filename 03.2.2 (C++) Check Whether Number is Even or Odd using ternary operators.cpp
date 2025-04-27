/// Check Whether Number is Even or Odd using ternary operators
/*
Operator ------------------- Example --------------------- Meaning
Ternary: ? :                 x==5 ? y='A' : z='B'          If 'x==5' is true then work 'y'. eles work 'z'
*/

#include <iostream>
using namespace std;

int main()
{
     int x;
     cout<<" Enter any integer number: ";
     cin>>x;

     (x%2 == 0) ? cout<<" The number is even \n" : cout<<" The number "<<x<<" is odd \n";

     return 0;
}


/* ===== Output/Result:

 Input:___________________
 Enter Celsius: 12

 Output:_________________
 Fahrenheit: 53.6

*/
