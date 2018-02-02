#include "iostream"
#include <conio.h>
#include <Windows.h>

using namespace std;

void gotoxy(int x, int y);				// wywo³ywanie funkcji znajduj¹cych siê poni¿ej
int wherex();
int wherey();
void HideCursor();

const int Esq = 27;
const int MAX_SZEROKOSC = 104;
const int MAX_WYSOKOSC = 24;

int main()
{
	int x, y, x1, y1, bok, szerokosc, wysokosc;
	char klawisz;
	cout << "Prosze wybrac znak : "<<endl;    	// Wybieranie znaku ASCII
	char znak;
	znak = getch();
	x = 0; y = 0;
	cout << "Podaj szerokosc : ";
	cin >> szerokosc;						// Podawanie wymiary figury
	cout << "Podaj wysokosc : ";
	cin >> wysokosc;
	do
	{
		system("cls");

		x1 = x; y1 = y;
		gotoxy(x1, y1);

		for (int i = 0; i <= szerokosc; i++)		 // gorna krawedz
			cout << znak;
		int polowa = wysokosc / 2 ;
		for (int i = 1; i < wysokosc - 1; i++)    
		{
			if ( i < polowa )
			{
				x1 = x + i;
				y1 = y + i;
			}
			else {										// œrodek
			
				x1 = x +  wysokosc - i - 1;
				y1 = y + i;
			}
			
		gotoxy (x1,y1);
		cout << znak;
		
		}
		x1 = x;
		y1++;
		gotoxy(x1, y1);
		for (int i = 0; i <= szerokosc; i++)		// dolna krawedz
			cout << znak;

		HideCursor();
		klawisz = getch();

		switch (klawisz)
		{
		case 43: { 
			szerokosc = szerokosc + 2;
			wysokosc = wysokosc +2;		// powiekszenie figury
			x++; y++;
			break;
		}
		case 45: 
		{ 
			szerokosc = szerokosc - 2;
			wysokosc = wysokosc -2;		// pomniejszenie figury
			if ( x > 0){
			
			x--; 
		}
		if ( y > 0)
		{
			y--;
		}
			break;
		}

		case 75: { 
			x--;
				if (x <= 0)				// przesuniecie w lewo
				x = 0;
			break;
		}  
		case 77: { 
			x++;
				if (x >= MAX_SZEROKOSC)			// przesuniecie w prawo
				x = MAX_SZEROKOSC;
			break; 
		}
		case 72: { 
			y--;
				if (y <= 0)				// przesuniecie do gory
				y = 0;
			break; 
		}
		case 80: { 
			y++;
				if (y >= MAX_WYSOKOSC)			// przesuniecie do dolu
				y = MAX_WYSOKOSC;
			break; 
		}  
		case Esq: { 
			break;						// wyjscie  
		}
		}
	} while (klawisz != Esq);
return 0;
}


// Funkcja gotoxy(int x, int y) ustawia kursor w punkcie (x,y) konsoli
void gotoxy(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
//----------------------------------------------------------------------------
// Funkcja wherex() zwraca wspolrzêdn¹ x polo¿enia kursora w konsoli
int wherex()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	return csbi.dwCursorPosition.X;
}
//---------------------------------------------------------------------------- 
// Funkcja wherey() zwraca wspolrzêdn¹ x polo¿enia kursora w konsoli
int wherey()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	return csbi.dwCursorPosition.Y;
}
//----------------------------------------------------------------------------  
void HideCursor()
{
	::HANDLE hConsoleOut = ::GetStdHandle(STD_OUTPUT_HANDLE);
	::CONSOLE_CURSOR_INFO hCCI;
	::GetConsoleCursorInfo(hConsoleOut, &hCCI);
	hCCI.bVisible = FALSE;
	::SetConsoleCursorInfo(hConsoleOut, &hCCI);
}

