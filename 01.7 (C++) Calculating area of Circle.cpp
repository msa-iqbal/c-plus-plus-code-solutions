/// Calculating area of Circle

#include <iostream>
using namespace std;

int main()
{
     double radius, pi, area;
     pi = 3.1416;

     cout<<" Enter the value of a radius: ";
     cin>>radius;

     area = pi * radius * radius; //Calculating area of Circle
     cout<<" Area of Circle: "<<area<<endl;

     return 0;
}

 /* ===== Output / Result:

 Input:
 ------------------
 Enter the value of a radius: 10


 Output:
 ------------------
 Area of Circle: 314.16

*/
