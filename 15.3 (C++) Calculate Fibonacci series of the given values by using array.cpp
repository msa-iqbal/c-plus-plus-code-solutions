/// Calculate Fibonacci series of the given values by using array

/*
Fibonacci series,
Let, initial1st_no=0, 2nd_no=1  [first & second number are always constant]
Formula:
               Fibonacci Value (n) = Summation of previous 2 values
Example:
               Fibonacci Value (0) = 1st_no = 0
               Fibonacci Value (1) = 2nd_no = 1
               Fibonacci Value (2) = 1st_no + 2nd_no = 0+1 = 1  (3rd_no)
               Fibonacci Value (3) = 2nd_no + 3rd_no = 1+1 = 2 (4th_no)
               Fibonacci Value (4) = 3rd_no + 4th_no = 1+2 = 3  (5th_no)
               Fibonacci Value (5) = 4th_no + 5th_no = 2+3 = 5  (6th_no)
               Fibonacci Value (5) = 4th_no + 5th_no = 3+5 = 8  (7th_no)
*/

#include <iostream>
using namespace std;

int main()
{
        int fibo[100];
        int n, i, count=0;

        fibo[0]=0;
        fibo[1]=1;

        cout<<" Enter the Fibonacci value (n): ";
        cin>>n;

        // Calculate  Fibonacci Series
        for(i=2; i<n; i++){
            fibo[i] = fibo[i-1] + fibo[i-2];
        }

       //Showing Fibonacci Series
        cout<<endl;
        for(i=0; i<n; i++){
            cout<<" Fibonacci Value ("<<count<<"): "<<fibo[i]<<endl;
            count++;
        }

        return 0;
}

/* ===== Output / Result:

Input:
Enter the Fibonacci value (n): 5

Output:
Fibonacci Value (0): 0
Fibonacci Value (1): 1
Fibonacci Value (2): 1
Fibonacci Value (3): 2
Fibonacci Value (4): 3

*/





