/// Compare different different String for check they equal or not by using strcmp()

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name1 [50] = "Michael ";
    char name2 [] = "Scofield";
    int result = strcmp(name1, name2); //If both string are same then return '0'

    if(result == 0)
        cout<<" String are equal \n";
    else
        cout<<" String aren't equal \n";

    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 String aren't equal

*/
