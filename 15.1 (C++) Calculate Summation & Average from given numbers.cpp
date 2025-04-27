/// Calculate Summation & Average from given numbers

#include <iostream>
using namespace std;

int main()
{
        int num [100];
        int n, sum=0, i;

        cout<<" Enter the total numbers: ";
        cin>>n;

        cout<<" Enter "<<n<<" numbers: ";
        for(i=0; i<n; i++){
            cin>>num[i];
        }

        for(i=0; i<n; i++){
            sum=sum+num[i];
        }
        cout<<"\n";
        cout<<" The summation is: "<<sum<<endl;
        cout<<" The average is: "<<(float) sum/n<<endl;

        return 0;
}

/* ===== Output / Result:
Input:
Enter the total numbers: 4
Enter 4 numbers: 25 20 18 10

Output:
The summation is: 73
The average is: 18.25
*/

