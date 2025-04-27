/// Multiple functions() declare

#include <iostream>
using namespace std;

void  add(int, int); //function ProType or Function Basic
void  sub(int, int); //function ProType
void  mul(int, int); //function ProType
void  div(int, int); //function ProType

int main() //main function
{
    add(10,3);
    sub(10,3);
    mul(10,3);
    div(10,3);
    cout<<" All function are called";
    return 0;
}

void add(int a, int b){   //User-defined function
    int sum=a+b;
    cout<<" Sum: "<<sum<<endl;
}

void sub(int a, int b){   //User-defined function
    int subs=a-b;
    cout<<" Sub: "<<subs<<endl;
}

void mul(int a, int b){  //User-defined function
    int res=a*b;
    cout<<" Mul: "<<res<<endl;
}

void div(int a, int b){  //User-defined function
    float res = (float)a/b;
    cout<<" Mul: "<<res<<endl;
}

/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Sum: 13
 Sub: 7
 Mul: 30
 Mul: 3.33333
 All function are called

*/
