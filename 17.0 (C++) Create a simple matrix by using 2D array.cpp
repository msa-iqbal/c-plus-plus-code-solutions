/// Create a simple matrix by using 2D array
/*
Explain:
                        col [0] | col [1] | col [2] | col [3]
                        _________________________________________
        Row [0]   |   10    |   11      |   12      |   13    |                      -> Index Number
                        _________________________________________
        Row [1]   |   20    |   21      |   22      |   23    |                      -> Index Number
                        _________________________________________
        Row [2]   |   30    |   31      |   32      |   33    |                      -> Index Number
*/

#include <iostream>
using namespace std;

int main()
{
        int a[50][50], b[50][50], c[50][50];
        int row, col, numberOfrows, numberOfcols, r=0;

        // Input the total numbers of rows & columns for create matrix
        cout<<" Enter the total row(s) of the matrix: ";
        cin>>numberOfrows;
        cout<<" Enter the total col(s) of the matrix: ";
        cin>>numberOfcols;

        // Insert Matrix Values
        cout<<"\n Enter the values of row 0: \n";
        for(row=0; row<numberOfrows; row++){
                for(col=0; col<numberOfcols; col++){
                        cout<<" a["<<row<<"]["<<col<<"]: ";
                        cin>>a[row][col];
                }
                r++;
                if(r==numberOfrows){
                        cout<<"\n";
                }
                else{
                        cout<<"\n Enter the values of row "<<r<<": ";
                }
                cout<<"\n";
        }

        // Print 2D Matrix
        cout<<" The 2D Matrix is: \n";
        for(int row=0; row<numberOfrows; row++){
                cout<<"\t\t";
                for(int col=0; col<numberOfcols; col++){
                        cout<<a[row][col]<<"  ";
                }
                cout<<"\n";
        }

        return 0;
}

/* ===== Output / Result:
 Input:
 Enter the total row of the matrix: 3
 Enter the total col of the matrix: 4

 Enter the values of row 0:
 a[0][0]: 10
 a[0][1]: 11
 a[0][2]: 12
 a[0][3]: 13

 Enter the values of row 1:
 a[1][0]: 20
 a[1][1]: 21
 a[1][2]: 22
 a[1][3]: 23

 Enter the values of row 2:
 a[2][0]: 30
 a[2][1]: 31
 a[2][2]: 32
 a[2][3]: 33

 Output:
 The 2D Matrix is:
                10  11  12  13
                20  21  22  23
                30  31  32  33
*/






