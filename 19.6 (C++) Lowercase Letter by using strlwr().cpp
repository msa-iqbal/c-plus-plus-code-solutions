/// Lowercase Letter from given string by using strlwr()

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name [] = "Michael Scofield";

    strlwr(name); //Only Support One parameter
    cout<<" The Lowercase string is: "<<name<<endl;
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 The Lowercase string is: michael scofield

*/
