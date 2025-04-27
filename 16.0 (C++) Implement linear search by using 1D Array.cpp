/// Implement linear search by using 1D Array
/*
        let, int num[] = { 10, 2, 30, 15, 28, 5 }
            Search the value = 15

        1. Is the item found
        2. If yes then what's the position?
*/

#include <iostream>
using namespace std;

int main()
{
        int num[100];
        int n, i, value, position;

        cout<<" Enter the total number of values: ";
        cin>>n;

        // Insert the values (to array)
        cout<<" Enter the "<<n<<" values: ";
        for(i=0; i<n; i++){
            cin>>num[i];
        }

        position=-1;
        cout<<" Enter the value you want to search: ";
        cin>>value;

         // Search the values from array
        for(i=0; i<n; i++){
            if(value==num[i]){
                position=i+1;
                break;
            }
        }
        // Showing result from calculation
        cout<<"\n";
        if(position==-1){
            cout<<" Item isn't found";
        }
        else{
            cout<<" The value is found at position: "<<position<<endl;
        }

        return 0;
}

/* ===== Output / Result:
Input:
Enter the total number of values: 5
Enter the 5 values: 10 12 25 13 29
Enter the value you want to search: 13

Output:
The value is found at position: 4
*/





