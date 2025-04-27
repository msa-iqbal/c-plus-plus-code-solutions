#include<bits/stdc++.h>
using namespace std;

double f(double x);
double f(double x) {
     double a=x*x-3;    /// write the equation for calculate
     return a;
}

int main()
{
        /*-- set the precision --*/
        cout.precision(4);
        cout.setf(ios::fixed);

        double xl, xu, xm, threshold, fxl, fxu, fxm;
        xl:cout<<"Enter the value of lower limit (Xl): ";     // enter the value of 'xl:' for later use with 'goto'
        cin>>xl;
        cout<<"Enter the value of lower limit (Xu): ";
        cin>>xu;
        cout<<"Enter the degree of accuracy desired (Threshold): ";
        cin>>threshold;
        cout<<" "<<endl;

        if (f(xl)*f(xu)>0)         // if the condition is true then the root does not exist between xl and xu
        {
                cout<<"Please enter a different intial guess: "<<endl;
                goto xl;            //Back to 'Xl' then ask for different values of Xl and Xu
        }
        else                //else a root exists between xl and xu
        {
                while (fabs(xl-xu)>=threshold)
                {
                        xm=(xl+xu)/2.0;
                        fxl=f(xl);
                        fxu=f(xu);
                        fxm=f(xm);
                        cout<<"Xl: "<<xl<<"     "<<"Xu: "<<xu<<"     "<<"Xm: "<<xm<<"      Error: "<<fxm<<endl;

                        if (fxm==0)
                        {
                            cout<<"The root of the equation is:  "<<xm;
                            break;
                        }

                        if (fxl*fxm>0)    // No root exist between xl and xu
                        {
                             xl=xm;    /*xm the starting point of the interval and xu the end point*/
                        }
                        else if (fxl*fxm<0)
                        {
                             xu=xm;   // Root exist between xl and xu
                        }
                }
        }
        cout<<"The root of the equation is:  "<<xm;
        return 0;
}

/* ==== Output ==== 
Input: 
          Enter the value of lower limit (Xl): 1
          Enter the value of lower limit (Xu): 2
          Enter the degree of accuracy desired (Threshold): 0.0001

Result:
           Xl: 1.0000     Xu: 2.0000     Xm: 1.5000      Error: -0.7500
           Xl: 1.5000     Xu: 2.0000     Xm: 1.7500      Error: 0.0625
           Xl: 1.5000     Xu: 1.7500     Xm: 1.6250      Error: -0.3594
           Xl: 1.6250     Xu: 1.7500     Xm: 1.6875      Error: -0.1523
           Xl: 1.6875     Xu: 1.7500     Xm: 1.7188      Error: -0.0459
           Xl: 1.7188     Xu: 1.7500     Xm: 1.7344      Error: 0.0081
           Xl: 1.7188     Xu: 1.7344     Xm: 1.7266      Error: -0.0190
           Xl: 1.7266     Xu: 1.7344     Xm: 1.7305      Error: -0.0055
           Xl: 1.7305     Xu: 1.7344     Xm: 1.7324      Error: 0.0013
           Xl: 1.7305     Xu: 1.7324     Xm: 1.7314      Error: -0.0021
           Xl: 1.7314     Xu: 1.7324     Xm: 1.7319      Error: -0.0004
           Xl: 1.7319     Xu: 1.7324     Xm: 1.7322      Error: 0.0004
           Xl: 1.7319     Xu: 1.7322     Xm: 1.7321      Error: 0.0000
           Xl: 1.7319     Xu: 1.7321     Xm: 1.7320      Error: -0.0002

          The root of the equation is:  1.7320
*/
