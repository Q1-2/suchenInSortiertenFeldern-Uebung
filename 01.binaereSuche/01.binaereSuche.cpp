// 01. binäre Suche
#include <iostream>
using namespace std;

bool istEnthalten(int* zahlen, int elemente, int gesuchteZahl);

int main()
{
	int zahlen[] = { -2, 0, 3, 4, 5, 10 };
	int elemente = sizeof(zahlen) / sizeof(int);

	for (int i : zahlen)  cout << i << " ";

	// Tests: 
	for (int gesuchteZahl = -2; gesuchteZahl <= 10; gesuchteZahl+=2) {
		cout << "gesucht: " << gesuchteZahl <<" - entahlten: " << istEnthalten(zahlen, elemente, gesuchteZahl) << endl;
	}
	return 0;
}


bool istEnthalten(int* zahlen, int elemente, int z)
{
	

	return false;
}