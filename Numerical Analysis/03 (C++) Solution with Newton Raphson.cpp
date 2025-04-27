/// Solution with Newton Raphson

#include<bits/stdc++.h>
#define EPSILON 0.001
using namespace std;

// The First function() is 2*x^3 + 5*x^2 + 7*x + 10
double func(double x)
{
	return 2*x*x*x + 5*x*x + 7*x + 10;
}

// The Second derived function() is 6*x^2 + 10*x + 7
double derivFunc(double x)
{
	return 6*x*x + 10*x + 7;
}

// Function() to find the root
void newtonRaphson(double x)
{
	double h = func(x) / derivFunc(x);
	while (abs(h) >= EPSILON)
	{
		h = func(x)/derivFunc(x);

		// x(i+1) = x(i) - f(x) / f'(x)
		x = x - h;
		cout << "The value of the root is : " <<x<<endl;
	}
}

int main()
{
	double x = 7; // Initial values assumed
	newtonRaphson(x);
	return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 The value of the root is : 4.33154
 The value of the root is : 2.51023
 The value of the root is : 1.21266
 The value of the root is : 0.160492
 The value of the root is : -1.12503
 The value of the root is : -2.80135
 The value of the root is : -2.25136
 The value of the root is : -2.03395
 The value of the root is : -2.00072
 The value of the root is : -2

*/
