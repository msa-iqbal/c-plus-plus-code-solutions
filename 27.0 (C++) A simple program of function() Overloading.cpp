/// A simple program of function overloading

#include <iostream>
using namespace std;

void sum(int x, int y)
{
    int result = x+y;
    cout<<" Summation is: "<<result<<endl;
}

void sum(int x, int y, int z) //function overloading
{
    int result = x+y+z;
    cout<<" Summation is: "<<result<<endl;
}

int main() //main function
{
    sum(5,6);
    sum(5,6,7);
    return 0;
}

/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Summation is: 11
 Summation is: 18

*/
