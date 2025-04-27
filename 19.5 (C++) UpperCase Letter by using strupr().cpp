/// UpperCase Letter from given string by using strupr()

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name [] = "Michael Scofield";

    strupr(name); //Only Support One parameter
    cout<<" The UpperCase string is: "<<name<<endl;
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 The UpperCase string is: MICHAEL SCOFIELD

*/
