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
    cout.setf(ios::fixed); // wy�wietlenie liczby nieca�kowitej
							//w postaci u�amka dziesi�tnego
	cout.setf(ios::showpoint); // wy�wietlenie kropki dziesi�tnej i zer
							//nieznacz�cych w cz�ci dziesi�tnej
	cout.width(8); 				//okre�lenie og�lnej liczby znak�w
							// przeznaczonych na wy�wietlenie liczby
	cout.precision(3); 			//okre�lenie ilo�ci cyfr cz�ci dziesi�tnej
	cout << "X jest rowny :" << x << endl;
	cout.width(8);
	cout << "Y jest rowny :" << y << endl;

return 0;
}
