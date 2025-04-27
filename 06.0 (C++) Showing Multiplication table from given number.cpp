/// Showing Multiplication table from given number

#include <iostream>
using namespace std;

int main()
{
      while(1){
            int num, i;
            cout<<"\n Enter the number for multiplication: ";
            cin>>num;
            cout<<endl;

            /* -------- Iteration -------- */
            for(i=1; i<=10; i++){
                    cout<<" "<<num<<" x "<<i<<" = "<<num*i<<endl;
            }
       }

       return 0;
}


/* ===== Output / Result:
 Input:____________________________________
 Enter the number for multiplication: 5

 Output:__________________________________
 5 x 1 = 5
 5 x 2 = 10
 5 x 3 = 15
 5 x 4 = 20
 5 x 5 = 25
 5 x 6 = 30
 5 x 7 = 35
 5 x 8 = 40
 5 x 9 = 45
 5 x 10 = 50

*/
