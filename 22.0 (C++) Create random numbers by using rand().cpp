/// Create random numbers by using rand()

#include <iostream>
#include <stdlib.h> //using for rand()
using namespace std;

int main()
{
    for (int i=1; i<=5; i++)
    {
        int randonNum = rand()%5 +1; //calc. remainder upto 4 and +1. bz, random num, create 0 to up so, +1.
        cout<<" Random Number: "<<randonNum<<endl;
    }
    return 0;
}
/* ===== Output/Result:
 Input:___________________
 (built-in values within a rand())

 Output:_________________
 Random Number: 2
 Random Number: 3
 Random Number: 5
 Random Number: 1
 Random Number: 5
*/

