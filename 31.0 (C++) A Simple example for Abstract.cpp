/// Simple example for Abstract

#include <iostream>
using namespace std;

class A  // Super_Class
{
    public:
        // 'void' or user-defined func() can be use
        void show(){ cout<<" Hello Today! \n"; }
        virtual void display() = 0;  // Use for create a 'Abstract class'
};

// 'B' Sub_Class inherit 'A' Super_Class
class B : public A
{
    public:
        void display() // Function Overriding...
        {
            cout<<" Hi, Mr. Micheal Scofield\n";
        }
};

// 'C' Sub_Class inherit 'A' Super_Class
class C : public A
{
    public:
        void display() // Function Overriding...
        {
            cout<< " Hi, Linkon Borrow \n";
        }
};

int main()
{
    A *ptr;  // Create 'Pointer' for access Sub_Classes
    B ob1;  // Create object for Class 'B'
    C ob2;  // Create object for Class 'C'

    ptr = &ob1;     // Assign 'ob1' addr. to 'Pointer' for access class 'B'
    ptr->show();    // Call the Void_function()
    ptr->display(); // Call the Virtual_function()

    ptr = &ob2;     // Assign 'ob2' addr. to 'Pointer' for access class 'C'
    ptr->display(); // Call the Virtual_function()
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Hello Today!
 Hi, Mr. Micheal Scofield
 Hi, Linkon Borrow

*/
