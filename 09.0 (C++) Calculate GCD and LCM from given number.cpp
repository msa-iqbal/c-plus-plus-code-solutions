/// Calculate GCD(Greatest Common Divisor) & LCM(Least Common Multiple) form given number

/* *** Algorithm Explain:
Let, num1=60 and num2=26
here, for 60                         Similarly, for 24
          2/60=30                                  2/24=12
          2/30=15                                  2/12=6
          3/15=5                                      3/6=2

Now, 60 = 2 x 2 x 3 x 5
        24 = 2 x 2 x 3 x 2

So,     GCD = 2 x 2 x 3 = 12   (Only Support Common values)
           LCM =   2 x 2 x 3 x 5 x 2 = 120     (Support Common+UnCommon values)
           -----------------------------------------
           Another formula for GCD Calculate:  num1 % num2 = rem
                                                                -----------------------
                                                                num1=num2;       (Swapping)
                                                                num2=rem;          (Swapping)
                                                                here, num1 is GCD Number

                                                                Example:  num1 % num2 = rem
                                                                                60     %     24 = 12 (rem1)
                                                                               -----------------------------
                                                                                num2     rem1   = rem2
                                                                                24     %     12    = 0            (Swapping)

                                                                                rem1      rem2   = rem2         (Swapping)
                                                                                12     %       0    = Can't divide by Zero
                                                                                here, num1=12 is GCD number

            Another formula for LCM Calculate: LCM = (num1 * num2) / GCD
*/

#include <iostream>
using namespace std;

int main()
{
        int num1, num2, n1, n2, rem, gcd, lcm;

        cout<<" Enter the 2 numbers for GCD & LCM Calculate: ";
        cin>>num1>>num2;

        n1=num1;
        n2=num2;

        while(n2 != 0)
        {
                rem=n1%n2;
                n1=n2;     // Swapping
                n2=rem;        // Swapping
        }
        gcd=n1;
        cout<<" GCD Number is: "<<gcd<<endl;;

        lcm=num1*num2/gcd;
        cout<<" LCM Number is: "<<lcm<<endl;

        return 0;
}

/* ===== Output / Result:
 Input:
 Enter the 2 numbers for GCD & LCM Calculate: 60 24

 Output:
 GCD Number is: 12
 LCM Number is: 120
*/

