/// A Simple program where you faced Exception_Handling

#include <iostream>
using namespace std;

int main()
{
    try
    {
        int num1=10, num2=0;
        double result;

        /* 10/0=result doesn't possible and where u can use condition
            and throw '-1' to 'Catch' for handing */
        if(num2==0)
        {
            throw -1; // throw '-1' to 'Catch'
        }
        result = (double) num1 / num2;
        cout<<" Result: "<<result<<endl;
                    /* Out: inf
                        Output: infinity. because, 10/0 doesn't possible to calculate.
                        So, Output is Exception Error! */
    }

    catch(int x) // catch '-1' from 'throw'
    {
        cout<<" Divide isn't possible. Please! Try again... \n";
    }
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Divide isn't possible. Please! Try again...

*/
