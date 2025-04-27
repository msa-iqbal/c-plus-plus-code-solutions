/// Calculation by calculator by using switch statement

#include <iostream>
using namespace std;

int main()
{
         char choice;
         float x, y, result, n=6;
         cout<<" ----Calculation by calculator---- \n";
         cout<<" Press '+': Addition for 2 numbers \n";
         cout<<" Press '-': Subtraction for 2 numbers \n";
         cout<<" Press '*': Multiplication for 2 numbers \n";
         cout<<" Press '/': Division for 2 numbers \n";
         cout<<" Enter your choice: ";
         cin>>choice;

         switch(choice){
                case '+':
                             cout<<"\n Enter number x & y are: ";
                             cin>>x>>y;
                             result=x+y;
                             cout<<" The [+] result is: "<<result<<endl;
                             break;
                case '-':
                             cout<<"\n Enter number x & y are: ";
                             cin>>x>>y;
                             result=x-y;
                             cout<<" The [-] result is: "<<result<<endl;
                             break;
                case '*':
                             cout<<"\n Enter number x & y are: ";
                             cin>>x>>y;
                             result=x*y;
                             cout<<" The [*] result is: "<<result<<endl;
                             break;
                case '/':
                             cout<<"\n Enter number x & y are: ";
                             cin>>x>>y;
                             result=x/y;
                             cout<<" The [/] result is: "<<result<<endl;
                             break;

                default:
                             cout<<"\n Choose your calculation option! \n\n";
                             break;
         }

         return 0;
}

/* ===== Output / Result:

 Input:___________________________________
 ----Calculation by calculator----
 Press '+': Addition for 2 numbers
 Press '-': Subtraction for 2 numbers
 Press '*': Multiplication for 2 numbers
 Press '/': Division for 2 numbers
 Enter your choose: *
 Enter number x & y are: 5 6

 Output:__________________________________
 The [*] result is: 30.00

*/

