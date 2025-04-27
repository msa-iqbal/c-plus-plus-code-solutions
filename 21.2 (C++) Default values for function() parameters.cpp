/// Default values for function() parameters

#include <iostream>
using namespace std;

//User-defined Function
void test(int x=10, int y=20) //default_values for parameters
{
    cout<<" x = "<<x<<endl;
    cout<<" y = "<<y<<endl;
}

//Main function
int main()
{
    test(3);
    return 0;
}

/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 x = 3
 y = 20 (default_value)

*/

