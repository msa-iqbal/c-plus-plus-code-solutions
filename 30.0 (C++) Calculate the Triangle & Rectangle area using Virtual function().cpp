/// Calculate the Triangle & Rectangle area using Virtual function

#include <iostream>
using namespace std;

class Shape   // Super_Class
{
    public:
        double base, height;          // Class_Variable
        Shape (double base, double height)
        {
            this-> base = base;       // 'this' key detect to 'Class_var'
            this-> height = height;   // 'this' key detect to 'Class_var'
        }

        // Virtual in 'Overrid_Func()'. So,'Pointer' access to 'Overrid_Func()'
        virtual double area()
        {
            return 0;
        }
};

// 'Triangle' Sub_Class inherit 'Shape' Super_Class
class Triangle : public Shape
{
    public:
        Triangle (double base, double height)
        : Shape (base, height)   // Initialize values Contructor_func() to Class_Variable
        {

        }
        double area()  // Function Overriding...
        {
            return 0.5 * base * height;
        }
};

// 'Rectangle' Sub_Class inherit 'Shape' Super_Class
class Rectangle : public Shape
{
    public:
        Rectangle (double base, double height)
        : Shape (base, height)    // Initialize values Contructor func() to Class_Variable
        {

        }
        double area()  // Function Overriding...
        {
            return base * height;
        }
};

int main()
{
    Shape *p;                  // Create 'Pointer' for access Sub_Classes
    Triangle ob1(10,20);   // Initialize value to class 'Triangle'
    Rectangle ob2(10,20); // Initialize value to class 'Rectangle'

    // Assign 'ob1' object addr. to 'Pointer'for access class 'Triangle'
    p = &ob1;
    p->area();          // Call the Virtual_function()
    cout<<" Triangle Area: "<<p->area()<<endl;

    // Assign 'ob2' object addr. to 'Pointer' access class 'Rectangle'
    p = &ob2;
    p->area();             // Call the Virtual_function()
    cout<<" Rectangle Area: "<<p->area()<<endl;
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Triangle Area: 100
 Rectangle Area: 200

*/
