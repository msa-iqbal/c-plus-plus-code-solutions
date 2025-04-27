# include <iostream>
# include <cmath>
using namespace std;

int main()
{
    float a, b, c;
    float m, x, x1, x2;

    cout<<"Enter The Value a, b, c: ";
    cin>>a>>b>>c;

    m=(b*b)-(4*a*c);

    if(m>0){
        x1=(-b+sqrt(m))/(2*a);
        x2=(-b-sqrt(m))/(2*a);
        cout<<"Real Roots & Different Values x1 & x2 are: "<<x1<<" , "<<x2<<endl;
    }
    else if(m==0){
        x=(-b)/(2*a);
        cout<<"Real Roots & Same Value x is: "<<x<<endl;
    }
    else{
        x=(-b)/(2*a);
        x1=sqrt(-m)/(2*a);
        cout<<"Complex Roots"<<x<<" +i "<<x1<<endl;
        cout<<"Complex Roots"<<x<<" -i "<<x1<<endl;
    }
}

/* ==== Output: ====
Input:
      Enter The Value a, b, c: 1 3 -10
Result:
       Real Roots & Different Values x1 & x2 are: 2 , -5
*/
