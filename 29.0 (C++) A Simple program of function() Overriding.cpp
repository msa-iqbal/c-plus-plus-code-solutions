/// A Simple program of function() Overriding

#include <iostream>
using namespace std;

class A
{
    public:
        void display(){ cout<<" Showing 'A' "<<endl; }
};

// 'B' Sub_Class inherit 'A' Super_Class
class B : public A
{
    public:
        void display(){ cout<<" Showing 'B' "<<endl; }
};

// 'C' Sub_Class inherit 'A' Super_Class
class C : public A
{
    public:
        void display(){ cout<<" Showing 'C' "<<endl; }
};

int main()
{
    A ob1;
    ob1.display(); //Out: Showing 'A'

    B ob2;
    ob2.display(); //Out: Showing 'B'

    C ob3;
    ob3.display(); //Out: Showing 'C'
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Showing 'A'
 Showing 'B'
 Showing 'C'

*/
