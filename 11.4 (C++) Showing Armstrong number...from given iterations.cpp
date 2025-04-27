/// Showing "ArmStrong Number" from given iterations

#include <iostream>
using namespace std;

int main()
{
        int start, end, temp, rem, sum;

        cout<<" Enter start number: ";
        cin>>start;

        cout<<" Enter end number: ";
        cin>>end;

        for(int i=start; i<=end; i++){

                temp=i;

                while(temp !=0)
                {
                    rem=temp%10;
                    sum=sum+rem*rem*rem;
                    temp=temp/10;
                }

                if( i==sum )
                    cout<<"\n The \"ArmStrong Number\" is: "<<i<<endl;

                sum=0;
        }

        return 0;
}

/* ===== Output / Result:
 Input:
 Enter start number: 1
 Enter end number: 1500

 Output:
 The "ArmStrong Number" is: 153
 The "ArmStrong Number" is: 370
 The "ArmStrong Number" is: 371
 The "ArmStrong Number" is: 407
*/






