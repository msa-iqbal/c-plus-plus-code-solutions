/// Adding two numbers by using void() function()

#include <iostream>
using namespace std;

// User-defined Function
void summation (int a, int b){
    int result;
    result=a+b;
    cout<<" The summation is: "<<result<<"\n";
}

// Main Function
int main()
{
    summation(5, 13); // Call the function
    return 0;
}

/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 The summation is: 18

*/
