/// Calculate absolute value

#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<" Enter the integer value: ";
    cin>>num;

    if(num < 0)
    {
        cout<<" "<<(-num);
    }
    else
    {
        cout<<" "<<num;
    }

    return 0;
}

/* ===== Output/Result:

 Input:___________________
 Enter the integer value: -3

 Output:_________________
 3

*/
