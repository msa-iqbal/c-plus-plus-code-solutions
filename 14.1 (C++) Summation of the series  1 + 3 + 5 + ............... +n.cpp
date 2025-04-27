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
    int start=1, end, sum=0;

    cout<<" Enter the last number of the series: ";
    cin>>end;

    while(start<=end)
    {
        sum=sum+start;
        start=start+2;
    }

    cout<<"\n 1+3+5+. . . . . .+"<<end<<endl;
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




