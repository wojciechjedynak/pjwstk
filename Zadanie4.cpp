#include <iostream>
#include "conio.h"

using namespace std;

int main() {
	int a, b, c;
	
	cout << "Podaj a :";
	cin >> a;
	cout << "Podaj b :";
	cin >> b;
	cout << "Podaj c :";
	cin >> c;
	
	if (a>b && a>c)
	{
		cout << " Odcinek a jest najdluzszy " << endl;
	}
	else if (a<c && b<c)
	{
		cout << " Odcinek c jest najdluzszy " << endl;
		
	}
	else
	cout << " Odcinek b jest najdluzszy " << endl;

	   

return 0;
}
