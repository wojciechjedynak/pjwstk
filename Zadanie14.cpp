#include <iostream>
#include "conio.h"
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;

// const int e=
const int A=0;
const int B=1; 
int main() {
	float eps,x1,a1,b1,fx,fa,fb;
	int liczba = 0;
	a1 = A;
	b1 = B;
	cout << "Wczytaj Epsilon = " << endl;
	cin >> eps;
	
	x1 = ( a1 + b1 ) / 2;
	fx = pow(M_E,(-1.5f*x1)) -  ( 0.3f* (pow (x1,2)));
	if ( fx == 0 )
	{
		cout << "Pierwiastek : " << x1 ;
		return 0;
	}
	else 
	{
		while  (fabs (a1 - b1) > eps)
		{ 	cout << a1<<endl;
			cout << b1<<endl;
			liczba++;
			fa = pow(M_E,(-1.5f*a1)) -  ( 0.3f* (pow (a1,2)));
			fb = pow(M_E,(-1.5f*b1)) -  ( 0.3f* (pow (b1,2)));
			if ((fx * fa) < 0)
			{
				b1 = x1;
			}
			
			else if ((fx * fb) < 0)
			{
			a1 = x1;
			}
			x1 = ( a1 + b1 ) / 2;
			fx = pow(M_E,(-1.5f*x1)) -  ( 0.3f* (pow (x1,2)));
			cout << a1 <<endl;
			cout << b1 <<endl;
			cout << eps << endl;
			cout << fabs (a1 - b1) << endl;
			
		}
		cout << " Pierwiastek : " << x1 << endl;
		cout << " Liczba iteracji : " << liczba << endl;
		
	}

	
return 0;
}


