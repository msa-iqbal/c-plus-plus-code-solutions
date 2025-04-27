/// Function Template by using same parameters

#include <iostream>
using namespace std;

template <class myTem> // Create Template
myTem add(myTem x, myTem y)
{
    return x+y;
}

int main()
{
    cout<<" Summation: "<< add(10,2) <<endl;
    cout<<" Summation: "<< add(10.5,2.2) <<endl;
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Summation: 12
 Summation: 12.7

*/
