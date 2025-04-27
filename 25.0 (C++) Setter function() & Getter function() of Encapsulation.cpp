/// Setter function() & Getter function() of Encapsulation

#include <iostream>
using namespace std;

class Display
{
    private:  // Private Data
        string stu_name;

    public:   // Public Data

        // Setter func() set: void_func() access private data
        void set_stuName(string x){
            stu_name = x;
        }

        // Getter func() get: public func() access void_func()
        string get_stuName(){
            cout<<" Student Name: "<<stu_name<<endl;
        }
};

int main()
{
    Display ob; // Create Object

    // Call & Set the value into setterFunc() or void_func()
    ob.set_stuName("Micheal");
    ob.get_stuName(); // Call the getterFunction()
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Student Name: Micheal

*/
