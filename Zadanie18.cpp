#include <iostream>
#include "conio.h"
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;

const int N_MAX = 10;
void czytaj_dane(int &n, int X[ ], int Y[ ]);
int iloczyn_skalarny(int n, int X[ ], int Y[ ]);

int main() {
	
int n;
int X[N_MAX];
int Y[N_MAX];
czytaj_dane(n,X,Y);
int wynik = iloczyn_skalarny(n,X,Y);
cout << wynik;
return 0;
}

void czytaj_dane(int &n, int X[ ], int Y[ ])
{
	cout << " Podaj n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> X[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> Y[i];
	}
}

int iloczyn_skalarny(int n, int X[ ], int Y[ ])
{
	int suma = 0;
	for ( int i = 0; i <= n -1 ; i++)
	{
		suma = suma + X[i]*Y[i];
	}
	return suma;
}
