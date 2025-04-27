/// Guessing game by using rand()

#include <iostream>
#include <stdlib.h> //using for rand()
using namespace std;

int main()
{
    while(1)
    {
        int guessNumber, randomNumber;
        cout<<" Enter the guess number: ";
        cin>>guessNumber;
        randomNumber=rand()%5 +1;

        if(guessNumber==randomNumber){
            cout<<" You have won!"<<endl<<endl;
        }
        else{
            cout<<" You have lost. try again "<<endl;
            cout<<" Random number was: "<<randomNumber<<endl<<endl;
        }
    }
    return 0;
}

/* ===== Output/Result:

 Input:___________________
 Enter the guess number: 1
 Enter the guess number: 2
 Enter the guess number: 3
 Enter the guess number: 4
 Enter the guess number: 5  (Out:  You have won!)
 Enter the guess number:

 Output:_________________
 You have lost. try again
 Random number was: 2

 You have lost. try again
 Random number was: 3

 You have lost. try again
 Random number was: 5

 You have lost. try again
 Random number was: 1

 You have won!

*/
