/// Initialize values Constructor function() to Class Variable

#include <iostream>
using namespace std;

class Student
{
    public:
        const int id; const float gpa;  // Class Constant_Variable
        Student(int x, float y)              // Declare Parametrized_Constructor
        : id(x), gpa(y)   // Initialize values Constructor func() to Constant_Variable
        {
            cout<<" Student's ID: "<<id<<" & GPA: "<<gpa<<endl;
        }
};

int main()
{
    Student Abir(161722, 3.16);   // Initialize values Parametrized Constructor
    Student Himel(161723, 3.45); // Initialize values Parametrized Constructor
    return 0;
}

/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Student's ID: 161722 & GPA: 3.16
 Student's ID: 161723 & GPA: 3.45

*/
