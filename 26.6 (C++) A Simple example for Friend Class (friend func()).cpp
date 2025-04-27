/// A Simple example for Friend Class (friend func())

#include <iostream>
using namespace std;

class A
{
    private:
        string str_name1 = "Micheal", str_name2="Scofield"; /// private members

    public:
        friend class B; // FriendShip with Class 'B'
};

class B
{
    public:
    /* Create Object for 'A' Class for access private members from Class 'A' */
    void display(A ob)
    {
        cout<<" "<<ob.str_name1<<" "<<ob.str_name2<<endl;
    }
};

int main()
{
    A ob1; // Create Object for Class 'A'
    B ob2; // Create Object for Class 'B'
    ob2.display(ob1); /* Call the 'B' Class function with 'ob1'.
                                  this func() access private members with 'ob' object */
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Micheal Scofield.

*/

