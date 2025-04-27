/// Calculating area of Rectangle

#include <iostream>
using namespace std;

int main()
{
     double height, width, area;

     cout<<" Enter the value of Height: ";
     cin>>height; //vertical height

     cout<<" Enter the value of Width: ";
     cin>>width;

     area = height * width; // area of rectangle
     cout<<" Area of Rectangle: "<<area<<endl;

     return 0;
}

 /* ===== Output / Result:

 Input:
 ------------------
 Enter the value of Height: 10
 Enter the value of Width: 7

 Output:
 ------------------
 Area of Rectangle: 70

*/
