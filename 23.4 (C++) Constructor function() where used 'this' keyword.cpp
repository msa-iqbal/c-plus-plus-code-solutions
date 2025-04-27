/// Constructor function() where used 'this' keyword

#include <iostream>
using namespace std;

class Student
{
    public:
        string stName;

        Student(string stName)
        {
            this-> stName = stName; // 'this' key detect to 'Class_var'
        }

        void display (){ cout<<" Student Name: "<<stName<<endl; }
};

int main()
{
    Student ob("Micheal");
    ob.display();
    return 0;
}

/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Student Name: Micheal

*/
