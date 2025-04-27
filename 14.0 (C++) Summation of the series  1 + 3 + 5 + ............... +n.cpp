/// Summation of the series  1 + 3 + 5 + ............... +n
/*
Let, Series:  1 + 3 + 5 + ............... +n
now, Calculate:
                i. find end (n) number
                ii. different between each number
*/

#include <iostream>
using namespace std;

int main()
{
    int n, sum=0;

    cout<<" Enter the last number of the series: ";
    cin>>n;

    for(int i=1; i<=n; i=i+2)
    {
        sum=sum+i;
    }

    cout<<"\n 1+3+5+. . . . . .+"<<n<<endl;
    cout<<" Summation of the series: "<<sum<<endl;

    return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series: 15

Output:
1+3+5+. . . . . .+15
Summation of the series: 64
*/




