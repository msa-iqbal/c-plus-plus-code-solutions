/*  First Come First Serve (FCFS) disk scheduling  */
# include <bits/stdc++.h>
using namespace std;

int main()
{
        int n, arr[10], head=53, p, sum=0;

        cout<<" Head starts at: "<<head<<"\n Enter Total Value: ";
        cin>>n;

        cout<<" Enter the "<<n<<" numbers of search queue: ";
        for(int i=0; i<n; i++)
        {
                cin>>arr[i];
                p=abs(head-arr[i]);
                sum=sum+p;
                head=arr[i];
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
                 Total number of cylinders: 640
*/
