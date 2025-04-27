/// Hierarchical inheritance

#include <iostream>
using namespace std;

class A // Super_Class
{
    public:
        string name;
        void display1(){ cout<<" Name: "<<name<<endl; }
};

// 'B' Sub_Class inherit 'A' Super_Class
class B : public A
{
    public:
        int age;
        void display2()
        {
            display1(); // call the 'display1()' function from class 'A'
            cout<<" Age: "<<age<<endl;
        }
};

// 'C' Sub_Class inherit 'A' Super_Class
class C : public A
{
    public:
        int id;
        void display3(){ cout<<" ID: "<<id<<endl; }
};

int main()
{
    B ob1;                        // Object create for class 'B'
    C ob2;                        // Object create for class 'C'
    ob1.name="Micheal";  // Initialize value to class 'A'
    ob1.age=24;          // Initialize value to class 'B'
    ob2.id=161722;      // Initialize value to class 'C'
    ob2.display3();       // Call the 'display3()' function from class 'C'
    ob1.display2();      // Call the 'display2()' function from class 'B'
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

