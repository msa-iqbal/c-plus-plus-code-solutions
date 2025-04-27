/// Hybrid inheritance

#include <iostream>
using namespace std;

class A         // Super_Class/Base_Class
{
    public:
        string name;
        void display1(){ cout<<" Name: "<<name<<endl; }
};

class B         // Super_Class/Base_Class
{
    public:
        int age; string addr;
        void display2(){ cout<<" Age: "<<age<<endl; }
        void addrss(){ cout<<" Address: "<<addr<<endl; }
};

// 'C' Sub_Class inherit 'A' and 'B' Super_Classes (Multiple inheritance)
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

// 'D' Sub_Class inherit B' Super_Classes (Single inheritance)
class D: public B
{
    public:
        long int phone;
        void display4()
        {
            cout<<" Phone: "<<phone<<endl;
            addrss();  // call the 'addrss()' function from class 'B'
        }
};

int main()
{
    C ob3;          // Object create for class 'C'
    D ob4;          // Object create for class 'D'

    ob3.name="Michael";    // Initialize value to class 'A'
    ob3.age=24;                 // Initialize value to class 'B'
    ob3.id=161722;             // Initialize value to class 'C'
    ob3.display3();      // Call the 'display3()' function from class 'C'

    ob4.phone= 185226645;   // Initialize value to class 'A'
    ob4.addr="Dhaka";          // Initialize value to class 'B'
    ob4.display4();      // Call the 'display4()' function from class 'D'
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 ID: 161722
 Name: Michael
 Age: 24
 Phone: 185226645
 Address: Dhaka

*/
