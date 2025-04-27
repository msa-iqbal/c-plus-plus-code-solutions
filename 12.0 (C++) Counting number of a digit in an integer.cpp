/// Counting number of a digit in an integer

#include <iostream>
using namespace std;

int main()
{
        int num, count=0;

        cout<<" Enter any integer number: ";
        cin>>num;

        while(num != 0)
        {
            num=num/10;
            ++count;
        }
        cout<<" Total number of digits: "<<count<<endl;

        return 0;
}

/* ===== Output / Result:
 Input:
 Enter any integer number: 52369

 Output:
 Total number of digits: 5
*/


