/// Parametrized Constructor & Destructor function()

#include <iostream>
using namespace std;

class Student
{
    public:
        int id; float gpa;
        Student(int x, float y  // Parametrized Constructor _Declare
        {
            id = x; gpa = y;
        }
        Student()  // Default Constructor _Declare
        {
            cout<<" Default Contractor... \n";
        }
        void display()
        {
            cout<<" Student's ID: "<<id<<" & GPA: "<<gpa<<endl;
        }
        ~Student()  // Destructor _Declare
        {
            cout<<" Destructor is Display... \n";
        }
};

int main()
{
    // Initialize values Parametrized Constructor
    Student Abir(161722, 3.16);
    Abir.display();

    // Initialize values Parametrized Constructor
    Student Himel(161723, 3.45);
    Himel.display();

    // Create Object & Call the Default_Constructor
    Student DeObj;
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Student's ID: 161722 & GPA: 3.16
 Student's ID: 161723 & GPA: 3.45
 Default Contractor...
 Destructor is Display...
 Destructor is Display...
 Destructor is Display...

*/


