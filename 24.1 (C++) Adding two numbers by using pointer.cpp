/// Adding two numbers by using pointer

#include <iostream>
using namespace std;

int main()
{
     int x = 5;
     int y = 10;
     int sum;

     int *p1, *p2; // Create pointer variable

     p1=&x;   // assign 'x' variable_address to pointer_variable.
     p2=&y;   // assign 'y' variable_address to pointer_variable.

     sum = *p1 + *p2;

     //printf(" Summation = %d \n", sum);
     cout<<" Summation = "<<sum<<endl;

     return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Summation = 15

*/
