/// Calculate the Complex Number by using operator overloading

#include <iostream>
using namespace std;

class Complex
{
    private:
        int real, imag;

    public:
        Complex(int r=0, int i=0){ real=r;   imag=i; }

        // This is automatically called when '+' is used with between two Complex objects
        Complex operator + (Complex const &obj)
        {
            Complex result;
            result.real = real + obj.real;
            result.imag = imag + obj.imag;
            return result;
        }

        void display(){ cout<<" Real_Num + Imaginary_Num: "<<real<<" + i"<<imag<<endl; }
};

int main()
{
    Complex c1(12, 15), c2(5, 5);
    Complex c3 = c1 + c2; // An example call to "operator+"
    c3.display();
    return 0;
}

/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Real_Num + Imaginary_Num: 17 + i20

*/
