/// Number Conversions by using switch statement

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
        int choice, num;
        cout<<" ----- Number Conversions ----- \n";
        cout<<" Press 1: Decimal to Octal \n";
        cout<<" Press 2: Decimal to Hexa-decimal \n";
        cout<<" Press 3: Hexa-decimal to Decimal \n";
        cout<<" Press 4: Octal to Decimal \n";
        cout<<" Press 5: Octal to Hexa-decimal \n";
        cout<<" Enter your choice: ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                            printf(" Enter the decimal number: ");
                            scanf("%d", &num);
                            printf(" Octal number is: %o", num);
                            break;
                case 2:
                            printf(" Enter the decimal number: ");
                            scanf("%d", &num);
                            printf(" Hexa-decimal number is: %x", num);
                            break;
                case 3:
                            printf(" Enter the hexa-decimal number: ");
                            scanf("%x", &num);
                            printf(" Decimal number is: %d", num);
                            break;
                case 4:
                            printf(" Enter the octal number: ");
                            scanf("%o", &num);
                            printf(" Decimal number is: %d", num);
                            break;
                case 5:
                            printf(" Enter the octal number: ");
                            scanf("%o", &num);
                            printf(" Hexa-decimal number is: %x", num);
                            break;

                default:
                             printf(" Not a number");
                             break;
       }
       cout<<endl;

       return 0;
}


/* ===== Output / Result:

Input:_______________________________
 ----- Number Conversions -----
 Press 1: Decimal to Octal
 Press 2: Decimal to Hexa-decimal
 Press 3: Hexa-decimal to Decimal
 Press 4: Octal to Decimal
 Press 5: Octal to Hexa-decimal
 Enter your choose: 1
 Enter the decimal number: 25

 Output:
 Octal number is: 31

*/
