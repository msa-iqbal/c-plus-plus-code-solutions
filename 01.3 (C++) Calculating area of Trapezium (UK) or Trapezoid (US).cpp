/// Calculating area of Trapezium (UK) or Trapezoid (US)

#include <iostream>
using namespace std;

int main()
{
     double baseA, baseB, height, area;

     cout<<" Enter the value of Base A: ";
     cin>>baseA;

     cout<<" Enter the value of Base B: ";
     cin>>baseB;

     cout<<" Enter the value of Height: ";
     cin>>height; //vertical height

     area = 1.0/2 * (baseA + baseB) * height; //Calculating area of Trapezium
     cout<<" Area of Trapezium: "<<area<<endl;

     return 0;
}

 /* ===== Output / Result:

 Input:
 ------------------
 Enter the value of Base A: 7
 Enter the value of Base B: 13
 Enter the value of Height: 20

 Output:
 ------------------
 Area of Trapezium: 200

*/



