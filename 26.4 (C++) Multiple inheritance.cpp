/// Multiple inheritance

#include <iostream>
using namespace std;

class A      // Super/Base Class
{
    public:
        string name;
        void display1(){ cout<<" Name: "<<name<<endl; }
};

class B     // Super/Base Class
{
    public:
    int age;
    void display2(){ cout<<" Age: "<<age<<endl; }
};

// 'C' Sub_Class inherit 'A' and 'B' Super_Classes
class C : public A, public B
{
    public:
        int id;
        void display3()
        {
            cout<<" ID: "<<id<<endl;
            display1(); // call the 'display1()' function from class 'A'
            display2(); // call the 'display2()' function from class 'B'
        }
};

int main()
{
    C ob3;                        // Object create for class 'C'
    ob3.name="Michael";  // Initialize value to class 'A'
    ob3.age=24;               // Initialize value to class 'B'
    ob3.id=161722;          // Initialize value to class 'C'
    ob3.display3();            // Call the 'display3()' function from class 'C'
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 ID: 161722
 Name: Michael
 Age: 24

*/
