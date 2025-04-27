/// Calculate the maximum and minimum number from given numbers

#include <iostream>
using namespace std;

int main()
{
        int num [100];
        int n, i, max, min;

        cout<<" Enter the total numbers: ";
        cin>>n;

        cout<<" Enter "<<n<<" numbers: ";
        for(i=0; i<n; i++){
            cin>>num[i];
        }

       // Calculate maximum number
        max=num[0];
        for(i=1; i<n; i++){
            if(max<num[i]){
                max=num[i];
            }
        }

       // Calculate minimum number
       min=num[0];
       for(i=1; i<n; i++){
            if(min>num[i]){
                  min=num[i];
            }
        }

        cout<<endl;
        cout<<" The maximum number is: "<<max<<endl;
        cout<<" The minimum number is: "<<min<<endl;

        return 0;
}

/* ===== Output / Result:

 Input:__________________________
 Enter the total numbers: 5
 Enter 5 numbers: 10 25 8 65 13

 Output:________________________
 The maximum number is: 65
 The minimum number is: 8

*/

