/// Parametrized Constructor function()

#include <iostream>
using namespace std;

class Student
{
    public:
        int id; float gpa;         // Variable _Declare
        Student(int x, float y); // Parametrized_Constructor _Declare
        Student();                   // Default_Constructor _Declare
        void display();            // Function _Declare
};

// ClassName + Parametrized_Constructor
Student :: Student(int x, float y)
{
    id = x; gpa = y;
}

// ClassName + Default_Constructor
Student :: Student()
{
    cout<<" Default Contractor \n";
}

// ClassName + FunctionName_with_ReturnType
void Student :: display()
{
    cout<<" Student's ID: "<<id<<" & GPA: "<<gpa<<endl;
}

int main()
{
    Student Abir(161722, 3.16);  // Initialize values Parametrized Constructor
    Abir.display();
    Student Himel(161723, 3.45); // Initialize values Parametrized Constructor
    Himel.display();
    Student DeObj; // Create Object & Call Default_Constructor
    return 0;
}

/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Student's ID: 161722 & GPA: 3.16
 Student's ID: 161723 & GPA: 3.45
 Default Contractor

*/
