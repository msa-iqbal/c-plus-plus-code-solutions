/// Passing array to function

#include <iostream>
using namespace std;

void passToArray(int num[], int arraySize) //receive arrayName and arraySize
{
    for(int i=0; i<arraySize; i++)
    {
        cout<<num[i]<<" ";   //Out: 10 11 12 13 14
    }
}

int main()
{
    int number[5] = {10, 11, 12, 13, 14};
    passToArray(number, 5); //passing arrayName and arraySize

    return 0;
}

/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 10 11 12 13 14

*/
