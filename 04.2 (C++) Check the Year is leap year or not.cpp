/// Check the Year is leap year or not

/* Leap year calculate formula:
       Year%400 = 0
       OR
       Year%4 = 0
       OR
       Year%100 != 0
*/

#include <iostream>
using namespace std;

int main()
{
        int year;
        cout<<" Enter any year: ";
        cin>>year;

        if(year%400 == 0){
                cout<<"\n This Year is Leap Year \n";
        }
        else if ((year%4 == 0) && (year%100 != 0)){
                cout<<"\n This Year is Leap Year \n";
        }
        else
                cout<<"\n Not Leap Year \n";

        return 0;
}


/* ===== Output / Result:
Input:
Enter any year: 2012

Output:
This Year is Leap Year
*/

