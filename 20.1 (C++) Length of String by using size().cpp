/// Length of String by using size()

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name= "Michael Scofield";
    cout<<" Name: "<<name<<endl;

    int len = name.size();
    cout<<" Size of '"<<name<<"': "<<len<<endl;
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Name: Michael Scofield
 Size of 'Michael Scofield': 16

*/
