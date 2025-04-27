/// Create Constant Object by using function()

#include <iostream>
using namespace std;

class View
{
    public:
        //.Constant function create
        void display() const{ cout<<" Constant func() Display \n"; }
};

int main()
{
    const View ob; /// Constant object create
    ob.display();  /// Call the cons. func()
    return 0;
}

/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Constant func() Display

*/
