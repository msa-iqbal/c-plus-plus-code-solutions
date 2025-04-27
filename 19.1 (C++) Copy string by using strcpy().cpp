///  Copy string by using strcpy()

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char source [] = "Michael Scofield";
    char destination [100];

    strcpy(destination, source);
    cout<<"Check 'strcpy()' for 'destination': "<<destination<<endl;
    return 0;
}

/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Check 'strcpy()' for 'destination': Michael Scofield

*/
