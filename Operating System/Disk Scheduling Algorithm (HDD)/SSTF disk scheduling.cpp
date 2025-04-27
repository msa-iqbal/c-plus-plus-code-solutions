/*  Shortest Seek Time First(SSTF) disk scheduling */
#include<bits/stdc++.h>
using namespace std;
int temp[9];

int main()
{
         int ar[50],n;
         int mn, mnn, val, head=53, sum=0;
         cout<<" Head starts at: "<<head<<"\n Enter Total Value: ";
         cin>>n;
		 
         cout<<" Enter the "<<n<<" numbers of search queue: ";
         for(int k=0; k<n; k++)
         {
              cin>>ar[k];
         }

         for(int i=0; i<n; i++){
                mn=20000;
                for(int j=0; j<n; j++)
                {
                        if(temp[j]==0){
                            mnn=mn;
                            mn=min(mn, abs(head-ar[j]));
                            if(mnn != mn){
                                val=j;
                            }
                        }
                }
                sum = sum+mn;
                head=ar[val];
                temp[val]=1;
         }
         cout<<" Total number of cylinders: "<<sum<<endl;
         return 0;
 }


/* ---- Output -----
 Head starts at: 53
 Input:
                 Enter Total Value: 8
                 Enter the 8 numbers of search queue: 98 183 37 122 14 124 65 67
Result:
                 Total number of cylinders: 236
*/
