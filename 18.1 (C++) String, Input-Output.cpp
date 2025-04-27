/// String: Input-Output

#include <iostream>
using namespace std;

int main()
{
    char name [50];
    cout<<" Enter the name: ";
    cin>>name;
    cout<<" Welcome! "<<name<<endl;
    return 0;
}

/* ===== Output/Result:

 Input:___________________
 Nazrul Islam

 Output:_________________
 Enter the name: Nazrul Islam
 Welcome! Nazrul

 *** Error! because, 'cin' function can't work for 'Space'

*/
