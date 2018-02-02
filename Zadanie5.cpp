#include <iostream>
#include "conio.h"

using namespace std;

int main() {
	int n, suma;
	suma = 0;
	cout << " Podaj n :" << endl;
	cin >> n;
	for (int i = 1; n >= i ;i++)
	{
		cout << i << " * " << i;
		if (n > i)
		{
			cout << " + ";
		}
		suma = suma + i * i;
	}
	cout << " " << "= " << suma << endl;
	


return 0;
}
