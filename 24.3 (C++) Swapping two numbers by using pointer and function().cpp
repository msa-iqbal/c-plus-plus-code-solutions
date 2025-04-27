/// Swapping two numbers by using pointer and function()

#include <iostream>
using namespace std;

void swap(int *p1, int *p2) // Create pointer variable p1 and p2
{
    int temp;

    // Swapping x and y
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(){
     int x = 5;
     int y = 10;

     cout<<" Before swapping: x = "<<x<<", y = "<<y<<endl;

     swap(&x, &y);
     cout<<" After swapping: x = "<<x<<", y = "<<y<<endl;
     return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Before swapping: x = 5, y = 10
 After swapping: x = 10, y = 5

*/
