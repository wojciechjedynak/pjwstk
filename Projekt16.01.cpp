#include "iostream"
#include <conio.h>
#include <Windows.h>

using namespace std;

void gotoxy(int x, int y);				// wywo³ywanie funkcji znajduj¹cych siê poni¿ej
int wherex();
int wherey();
void HideCursor();

const int Esq = 27;

int main()
{
	int x, y, x1, y1, bok;
	char klawisz;
	x = 0; y = 0; bok = 4;
	do
	{
		system("cls");

		x1 = x; y1 = y;
		gotoxy(x1, y1);

		for (int i = -10; i <= bok; i++)		 // gorna krawedz
			cout << '*';

		for (int i = 1; i <= bok + 1; i++)    
		{
			y1++;
			gotoxy(x1, y1);
			cout << '*';
			x1 = x + bok - 1;					// boki - do poprawy
			gotoxy(x1, y1);
			cout << '*';
			x1 = x;
		}
		y1++;
		gotoxy(x1, y1);
		for (int i = -10; i <= bok; i++)		// dolna krawedz
			cout << '*';

		HideCursor();
		klawisz = getch();

		switch (klawisz)
		{
		case 43: { bok = bok + 2;		// powiekszenie figury
			x++; y++;
			break;
		}
		case 45: { bok = bok - 2;		// pomniejszenie figury
			x--; y--;
			break;
		}

		case 75: { x--;
				if (x <= 0)				// przesuniecie w lewo
				x = 0;
			break;
		}  
		case 77: { x++;
				if (x >= 104)			// przesuniecie w prawo
				x = 104;
			break; 
		}
		case 72: { y--;
				if (y <= 0)				// przesuniecie do gory
				y = 0;
			break; 
		}
		case 80: { y++;
				if (y >= 24)			// przesuniecie do dolu
				y = 24;
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

