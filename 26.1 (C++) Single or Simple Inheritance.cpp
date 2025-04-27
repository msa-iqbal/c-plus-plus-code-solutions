/// Single or Simple Inheritance

#include <iostream>
using namespace std;

class Person // Super_Class
{
    public:
        string name; int age;
        void display1()
        {
            cout<<" Name: "<<name<<endl;
            cout<<" Age: "<<age<<endl;
        }
};

// 'Student' Sub_Class inherit 'Person' Super_Class
class Student : public Person
{
    public:
        int id;
        void display2(){ cout<<" ID: "<<id<<endl; }
};

int main()
{
    Student ob;                 // Create Object
    ob.id = 161722;           // Value assign
    ob.name = "Micheal";  // Value assign
    ob.age = 24;               // Value assign
    ob.display2();              // Call the function()
    ob.display1();              // Call the function()
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 ID: 161722
 Name: Micheal
 Age: 24

*/

