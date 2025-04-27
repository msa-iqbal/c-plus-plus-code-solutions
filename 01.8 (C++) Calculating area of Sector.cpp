/// Calculating area of Sector

#include <iostream>
using namespace std;

int main()
{
     double radius, angleInRadian, area;

     cout<<" Enter the value of a radius: ";
     cin>>radius;

     cout<<" Enter the value of an angle in radian: ";
     cin>>angleInRadian;

     area = 0.5 * (radius * radius) * angleInRadian; //Calculating area of Sector
     cout<<" Area of Sector: "<<area<<endl;

     return 0;
}

 /* ===== Output / Result:

 Input:
 ------------------
 Enter the value of a radius: 10
 Enter the value of an angle in radian: 120

 Output:
 ------------------
 Area of Sector: 6000

*/
