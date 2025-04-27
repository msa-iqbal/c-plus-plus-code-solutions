/// Convert between Celsius and Kelvin by using switch statement

#include <iostream>
using namespace std;

int main()
{
    double celsius, kelvin;
    int n;

    while(1)
    {
            cout<<endl<<endl;
            cout<<" Press 1: Kelvin to Celsius"<<endl;
            cout<<" Press 2: Celsius to Kelvin"<<endl;
            cout<<" Enter your choice: ";
            cin>>n;

            switch(n)
            {
                case 1:
                          cout<<" Enter Kelvin: ";
                          cin>>kelvin;

                          celsius = kelvin - 273;
                          cout<<" Celsius: "<<celsius<<endl;
                          break;

                case 2:
                          cout<<" Enter Celsius: ";
                          cin>>celsius;

                          kelvin = celsius + 273;
                          cout<<" Kelvin: "<<kelvin<<endl;
                          break;

                default:
                           cout<<" Choice any option!"<<endl;
                           break;
            }
    }

    return 0;
}

/* ===== Output/Result:
 --------------- 1st Choice:
 Input:___________________
 Press 1: Kelvin to Celsius
 Press 2: Celsius to Kelvin
 Enter your choice: 1
 Enter Kelvin: 22

 Output:_________________
 Celsius: -251

 --------------- 2nd Choice:
 Input:___________________
 Press 1: Kelvin to Celsius
 Press 2: Celsius to Kelvin
 Enter your choice: 2
 Enter Celsius: 31

 Output:_________________
 Kelvin: 304
*/









