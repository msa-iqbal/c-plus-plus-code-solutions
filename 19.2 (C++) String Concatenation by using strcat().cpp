/// String Concatenation by using strcat()

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name1 [] = "Michael ";
    char name2 [] = "Scofield";

    strcat(name1, name2);
    cout<<" Print the Concatenation: "<<name1<<endl;
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Print the Concatenation: Michael Scofield

*/
