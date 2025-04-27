/// Check the letter is vowel or consonant

#include <iostream>
using namespace std;

int main()
{
     char ch;
     cout<<" Enter the letter: ";
     cin>>ch;

     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<" This letter is vowel \n";
     }
     else if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
     {
            cout<<" This letter is vowel \n";
     }
     else
            cout<<" This letter is consonant \n";

     return 0;

}

/* ===== Output/Result:

 Input:___________________
 Enter the letter: y

 Output:_________________
 This letter is consonant

*/
