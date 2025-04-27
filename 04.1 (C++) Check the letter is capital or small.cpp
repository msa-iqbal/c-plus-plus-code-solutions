/// Check the letter is capital or small

#include <iostream>
using namespace std;

int main()
{
     char ch;
     cout<<" Enter any letter: ";
     cin>>ch;

     if('a'<=ch && ch<='z'){
            cout<<"\n Small letter \n";
      }
      else if ('A'<=ch && ch<='Z')
      {
           cout<<"\n Capital letter \n";
      }
      else
            cout<<"\n Not a letter \n";

      return 0;
}

/* ===== Output / Result:

 Input:___________________
 Enter any letter: s

 Output:_________________
 Small letter

*/
