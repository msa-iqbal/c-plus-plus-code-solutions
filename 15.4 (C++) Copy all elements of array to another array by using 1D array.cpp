/// Copy all elements of array to another array by using 1D array

#include <iostream>
using namespace std;

int main()
{
    int array1 [100];
    int array2 [100];
    int n, i;

    cout<<" Enter the total number of values: ";
    cin>>n;

    // Insert the values (to array)
    cout<<" Enter the "<<n<<" values: ";
    for(i=0; i<n; i++){
         cin>>array1[i];
    }

    cout<<"\n The values of array1 are: ";
    for(i=0; i<n; i++){
        cout<<array1[i]<<" ";
    }

    // Copy all elements of array1 to array2
    for(i=0; i<n; i++){
        array2[i]=array1[i];
    }

    cout<<"\n The values of array2 are: ";
    for(i=0; i<n; i++){
        cout<<array2[i]<<" ";
    }

    return 0;
}

/* ===== Output / Result:
 Input:
 Enter the total number of values: 5
 Enter the 5 values: 12 36 58 14 36

 Output:
 The values of array1 are: 12 36 58 14 36
 The values of array2 are: 12 36 58 14 36
*/




