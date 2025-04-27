/// Find the number is even or odd

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<" Enter the number: ";
    cin>>x;

    if(x%2 == 0)
    {
        cout<<" The number is even \n";
    }
    else{
        cout<<" The number "<<x<<" is odd \n";
    }

    return 0;
}

/* ===== Output / Result:
Input:
Enter the number: 5

Output:
The number 5 is odd
*/
