/// Adding two numbers by using function()

#include <iostream>
using namespace std;

//User-defined Function
int summation (int a, int b)
{
    return a+b;
}

//Main Function & starts to run a program
int main()
{
    int num1=5, num2=13;
    cout<<" The summation is: "<<summation(num1, num2)<<" \n";
    return 0;
}

/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 The summation is: 18

*/
