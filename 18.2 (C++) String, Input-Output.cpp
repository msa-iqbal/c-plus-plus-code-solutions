/// String: Input-Output

#include <iostream>
#include <stdio.h> // using for 'String' Operation
using namespace std;

int main()
{
    char name [50];
    cout<<" Enter the name: ";
    gets(name);

    cout<<" The string is: "<<name;
    return 0;
}

/* ===== Output/Result:

 Input:___________________
 Nazrul Islam

 Output:_________________
 Enter the name: Nazrul Islam
 Welcome! Nazrul Islam

 *** No Error!

*/
