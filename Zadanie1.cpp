#include <iostream>
#include "conio.h"

using namespace std;

int main() {
	float a, b, c, d, e, f, W, Wx, Wy, x, y;
	
	cout << "Podaj a :";
	cin >> a;
	cout << "Podaj b :";
	cin >> b;
	cout << "Podaj c :";
	cin >> c;
	cout << "Podaj d :";
	cin >> d;
	cout << "Podaj e :";
	cin >> e;
	cout << "Podaj f :";
	cin >> f;

	W = a * d - b * c;	   
    Wx = e * d - b * f;
    Wy = a * f - e * c;
    
    if( W != 0 ) {
    x = Wx/W;
    y = Wy/W;
	}
    cout.setf(ios::fixed); // wyœwietlenie liczby nieca³kowitej
							//w postaci u³amka dziesiêtnego
	cout.setf(ios::showpoint); // wyœwietlenie kropki dziesiêtnej i zer
							//nieznacz¹cych w czêœci dziesiêtnej
	cout.width(8); 				//okreœlenie ogólnej liczby znaków
							// przeznaczonych na wyœwietlenie liczby
	cout.precision(3); 			//okreœlenie iloœci cyfr czêœci dziesiêtnej
	cout << "X jest rowny :" << x << endl;
	cout.width(8);
	cout << "Y jest rowny :" << y << endl;

return 0;
}
