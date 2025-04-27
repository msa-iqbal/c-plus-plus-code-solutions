/// Check prime number from given number
/*
1 or GivenNumber / GivenNumber = GivenNumber or Zero, then Prime number
1 or GivenNumber or OtherNumber / GivenNumber = GivenNumber or Zero or Others, then Not Prime number
*** Note. Not Allow fraction values.
Example:
              Given number: 5
                     1/5=5
                     2/5= 0.4  [x]
                     3/5= 0.6  [x]
                     4/5= 0.8  [x]
                     5/5=0
                     Here, others(2,3,4) divided number isn't appropriate for divide. So, 5 is Prime Number. (without 1 or GivenNumber)
              Given number: 6
                     1/6=5
                     2/6=3
                     3/6=2
                     4/6=0.67  [x]
                     5/6=0.83  [x]
                     6/6=0
                     Here, others(2,3,4,5) divided number is appropriate for divide. So, 6 isn't Prime Number. (without 1 or GivenNumber)
*/

#include <iostream>
using namespace std;

int main()
{
        int num, count=0, i;
        cout<<" Enter any number: ";
        cin>>num;

        for(i=2; i<num; i++)
        {
            if(num%i==0){
                count++;
                break;
            }
        }

        if(count==0){
            cout<<" "<<num<<" is prime number\n";
        }
        else
            cout<<" "<<num<<" isn't prime number\n";

        return 0;
}

/* ===== Output / Result:
 Input:
 Enter any number: 6

 Output:
 6 isn't prime number
*/


