/// Calculating area of triangle

#include <iostream>
using namespace std;

int main()
{
     double base, height, area;

     cout<<" Enter the value of Base: ";
     cin>>base;

     cout<<" Enter the value of Height: ";
     cin>>height;

     area = (double)1/2 * base * height; // area of triangle
     cout<<" Area of Triangle: "<<area<<endl;

     return 0;
}

 /* ===== Output / Result:

 Input:
 ------------------
 Enter the value of Base: 15
 Enter the value of Height: 3

 Output:
 ------------------
 Area of Triangle: 22.5

*/


