/// Celsius to Fahrenheit Convert

#include <iostream>
using namespace std;

int main()
{
    double celsius, fahrenheit;

    cout<<" Enter Celsius: ";
    cin>>celsius;

    fahrenheit = (1.8 * celsius) + 32; //Celsius to Fahrenheit
    cout<<" Fahrenheit: "<<fahrenheit<<endl;

    return 0;
}

/* ===== Output/Result:

 Input:___________________
 Enter Celsius: 12

 Output:_________________
 Fahrenheit: 53.6

*/
