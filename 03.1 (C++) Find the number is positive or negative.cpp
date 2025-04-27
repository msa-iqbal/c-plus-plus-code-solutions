/// Find the number is positive or negative

#include <iostream>
using namespace std;


int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;

    if(x>0)
    {
        cout<<"The number is positive \n";
    }
    else if(x<0){
        cout<<"The number is negative \n";
    }
    else
        cout<<"The number is not positive or negative \n";

    return 0;
}

/* ===== Output / Result:
Input:
Enter the number: 5

Output:
The number is positive
*/
