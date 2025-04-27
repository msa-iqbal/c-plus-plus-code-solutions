/// Summation of the series  1x2 + 2x3 + 3x4 + ............... + n1 x n2
/*
Let, Series:  1x2 + 2x3 + 3x4 + ............... +n1 x n2
now, Calculate:
                i. find end (n) number
                ii. different between each number
Example:
               1x2 + 2x3 + 3x4 + . . . . + 5x6
            = 1x2 + 2x3 + 3x4 + 4x5 + 5x6
            = 2 + 6 + 12 + 20 + 30
            = 70 (Summation of this series)
*/

#include <iostream>
using namespace std;

int main()
{
    int start1=1, start2=2, end1, end2, sum=0;

    cout<<" Enter the last number of the series n1 and n2 are: ";
    cin>>end1>>end2;

    while(start1<=end1 && start2<=end2)
    {
        sum=sum + start1*start2;
        start1=start1+1;
        start2=start2+1;
    }

    cout<<"\n 1x2 + 2x3 + 3x4 + . . . . . . . . . . . . + "<<end1<<"x"<<end2<<endl;
    cout<<" Summation of the series: "<<sum<<endl;

    return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series n1 and n2 are: 8 9

Output:
1x2 + 2x3 + 3x4 + . . . . . . . . . . . . + 8x9
Summation of the series: 240
*/









