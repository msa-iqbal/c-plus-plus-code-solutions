/// Find the total word with numeric number from given strings.

#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    char string[100];
    int i=0, count=0, strlng=0, result=0;
    int num, num_count=0, sum=0;

    printf("\n \n Enter the String: ");
    scanf("%[^\n]string", string);

    /// Word Count Without Numeric Numbers
    for(i=0; string[i] !='\0'; i++)
    {
        if(string[i] == ' ')
            count++;

        if(isdigit(string[i]))
            strlng++;
    }
    result=count-strlng;

    printf(" Total number of words are: %d \n", count+1);
    printf(" Total number of words are (Without Digits): %d \n", result+1);
    printf(" Total number of digits: %d \n", strlng);
    return 0;
}

/* ===== Output/Result:
 Input:___________________
 Enter the String: I am 9 year old

 Output:_________________
 Total number of words are: 5
 Total number of words are (Without Digits): 4
 Total number of digits: 1
*/
