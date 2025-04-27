/// String: Input-Output

#include <iostream>
using namespace std;

int main()
{
    char name [7];
    name[0]='B';
    name[1]='A';
    name[2]='N';
    name[3]='G';
    name[4]='L';
    name[5]='A';
    name[6]='\0';  //null character using  for avoid error from last index

    cout<<" The string is: "<<name<<endl;

    /* ----------- OR ----------- */
    //here, array_size no needed
    char name2 []={'B', 'A', 'N', 'G', 'L', 'A', '\0'};
    cout<<" The string is: "<<name2<<endl;

    /* ----------- OR ----------- */
    //for Single line
    char name3 []="BANGLA";
    cout<<" The string is: "<<name3<<endl;

    /* ----------- OR ----------- */
    //for Multiple line and here, must be use '\' line breaking character.
    char name4 []="BANGLA \ DESH";
    cout<<" The string is: "<<name4<<endl;
    return 0;
}

/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 The string is: BANGLA
 The string is: BANGLA
 The string is: BANGLA
 The string is: BANGLA  DESH

*/
