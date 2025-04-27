/// Fahrenheit to Celsius convert

#include <iostream>
using namespace std;

int main()
{
    double celsius, fahrenheit;

    cout<<" Enter Fahrenheit: ";
    cin>>fahrenheit;

    celsius = (fahrenheit - 32) / 1.8;
    cout<<" Celsius: "<<celsius<<endl;

    return 0;
}

/* ===== Output/Result:

 Input:___________________
 Enter Fahrenheit: 89

 Output:_________________
 Celsius: 31.6667

*/
