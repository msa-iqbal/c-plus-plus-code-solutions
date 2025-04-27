/// Pointer pointing to different variables

#include <iostream>
using namespace std;

int main()
{
     int x = 5;
     int y = 10;
     int z = 15;

     int *p; // Create pointer variable

     p=&x;   // assign 'x' variable_address to pointer_variable.
     cout<<" Value of x = "<<*p<<endl;

     p=&y;  // assign 'y' variable_address to pointer_variable.
     cout<<" Value of y = "<<*p<<endl;

     p=&z;   // assign 'z' variable_address to pointer_variable.
     cout<<" Value of y = "<<*p<<endl;
     return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Value of x = 5
 Value of y = 10
 Value of y = 15

*/
