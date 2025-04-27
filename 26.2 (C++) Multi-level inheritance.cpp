/// Multi-level inheritance

#include <iostream>
using namespace std;

class A // Super_Class
{
    public:
        string name;
};

// 'B' Sub_Class inherit 'A' Super_Class
class B : public A
{
    public:
        int age;
};

// 'C' Sub_Class inherit 'B' Sub_Class
class C : public B
{
    public:
        int id;
        void display()
        {
            cout<<" ID: "<<id<<endl;
            cout<<" Name: "<<name<<endl;
            cout<<" Age: "<<age<<endl;
        }
};

int main()
{
    C ob;                       // Create Object
    ob.id=161722;          // Value assign
    ob.name="Micheal"; // Value assign
    ob.age=24;              // Value assign
    ob.display();             // Call the function
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
