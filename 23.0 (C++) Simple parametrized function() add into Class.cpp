///  Simple parametrized function() add into Class

#include <iostream>
using namespace std;

class Student
{
    public:
        int id; float gpa;
        void display(){ cout<<" Student's ID: "<<id<<" & GPA: "<<gpa<<endl; }
        void setValue(int x, float y){ id = x; gpa = y; }
};

int main()
{
    Student Abir, Himel;
    Abir.setValue(161722, 3.16);
    Himel.setValue(161723, 3.40);
    Abir.display();
    Himel.display();
    return 0;
}

/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Student's ID: 161722 & GPA: 3.16
 Student's ID: 161723 & GPA: 3.4

*/
