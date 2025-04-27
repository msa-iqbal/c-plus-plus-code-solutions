/// Calculating area of Ellipse

#include <iostream>
using namespace std;

int main()
{
     double axisA, axisB, area;
     double pi = 3.1416;

     cout<<" Enter the value of A axis: ";
     cin>>axisA;

     cout<<" Enter the value of B axis: ";
     cin>>axisB;

     area = pi * axisA * axisB; //Calculating area of Ellipse
     cout<<" Area of Ellipse: "<<area<<endl;

     return 0;
}

 /* ===== Output / Result:

 Input:
 ------------------
 Enter the value of A axis: 15
 Enter the value of B axis: 12

 Output:
 ------------------
 Area of Ellipse: 565.488

*/






