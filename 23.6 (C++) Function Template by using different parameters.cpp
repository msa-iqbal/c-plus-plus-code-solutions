/// Function Template by using different parameters

#include <iostream>
using namespace std;

/*-----Create Template -----*/
template <class myTem1, class myTem2>
myTem1 add(myTem1 x, myTem2 y)
{
    return x+y;
}

int main()
{
    cout<<" Summation: "<< add(9.5, 2.5) <<endl;
    cout<<" Summation: "<< add(10.5, 5) <<endl;
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Summation: 12
 Summation: 15.5

*/
