/// A simple program of function() overloading

#include <iostream>
using namespace std;

class A
{
    public:
        void sum(){ cout<<" Summation is: Not Calculation"<<endl; }

        void sum(int x, int y) //function overloading...
        {
            int result = x+y;
            cout<<" Summation is: "<<result<<endl;
        }

        void sum(int x, int y, int z) //function overloading...
        {
            int result = x+y+z;
            cout<<" Summation is: "<<result<<endl;
        }
};

int main() //main function
{
    A ob;
    ob.sum();         // Call the function()
    ob.sum(5,6);     // Call the function()
    ob.sum(5,6,7);  // Call the function()
    return 0;
}

/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Summation is: Not Calculation
 Summation is: 11
 Summation is: 18

*/
