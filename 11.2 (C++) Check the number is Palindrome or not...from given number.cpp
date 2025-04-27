/// Check the number is Palindrome or not...from given number

/*
  Condition:
            -Input number == Reverse number
			 If, both result are same then the input number is Palindrome number.
			 else, the input number isn't Palindrome number.

*/

#include <iostream>
using namespace std;

int main()
{
        int n, temp, rem, sum=0;

        cout<<" Enter any number: ";
        cin>>n;

        temp=n;

        while(temp !=0)
        {
            rem=temp%10;
            sum=sum*10+rem;
            temp=temp/10;
        }
        cout<<" Reverse of digits: "<<sum<<endl;

        if(n==sum)
            cout<<"\n The given number is \"Palindrome Number\" \n";
        else
            cout<<"\n The given number isn't \"Palindrome Number\" \n";

        return 0;
}

/* ===== Output / Result:
Input:
Enter any number: 121

Output:
Reverse of digits: 121
The given number is "Palindrome Number"
*/



