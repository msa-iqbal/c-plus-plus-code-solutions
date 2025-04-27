/// Calculate reverse of digits from given number

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

        return 0;
}

/* ===== Output / Result:
Input:
Enter any number: 1234

Output:
Reverse of digits: 4321
*/




