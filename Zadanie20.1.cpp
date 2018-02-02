#include <iostream>
#include "conio.h"
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;


int main() {

int n = 3;
int *wsk;
int *wsk1;
//float *wsk2;
wsk = &n;
wsk1 = wsk;
//wsk2 = wsk;
	cout << wsk << endl;
	cout << *wsk << endl;
	cout << wsk1 << endl;
	cout << *wsk1 << endl;
//	cout << wsk2 << endl;
//	cout << *wsk2 << endl;
return 0;
}
