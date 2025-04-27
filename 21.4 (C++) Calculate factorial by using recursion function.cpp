///  Calculate factorial by using recursion function
/*
fact(4) ->
4 x fact(3) ->  3 x fact(2) ->  2 x fact(1) -> 1
4 x 6 = 24 <- 3 x 2 = 6   <-  2 x 1 = 2   <- 1
So, fact, n=24
*/

#include <iostream>
using namespace std;

int fact(int n){        // User-defined Function
    if(n==1)     // Base case of recursion function
        return 1;
    else
        return n * fact(n-1);       //fact() Recursive Call
}
int main()   //Main Function & starts to run a program
{
    int result=fact(4);
    cout<<" Factorial is: "<<result<<"\n"; //out: 24
    return 0;
}

/* ===== Output/Result:
 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Factorial is: 24
*/
