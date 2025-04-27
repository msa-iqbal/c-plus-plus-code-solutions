/// Find the largest number from given 3 numbers

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout<<" Enter the 1st number: "; // 1st number
    cin>>x;
    cout<<" Enter the 2nd number: "; // 2nd number
    cin>>y;
    cout<<" Enter the 3rd number: ";  // 3rd number
    cin>>z;

    if(x>y && x>z)
    {
        cout<<"\n The largest number is: "<<x<<endl;
    }
    else if(y>x && y>z){
        cout<<"\n The largest number is: "<<y<<endl;
    }
    else
        cout<<"\n The largest number is: "<<z<<endl;

    return 0;
}

/* ===== Output / Result:

Input:___________________
Enter the 1st number: 25
Enter the 2nd number: 36
Enter the 3rd number: 14

Output:_________________
The largest number is: 36

*/




