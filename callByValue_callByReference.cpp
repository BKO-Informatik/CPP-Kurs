// ich hoffe

#include <iostream>
#include <string>

using namespace std;

void callByValue(int a);
void callByReference(int& a);

int main() {
	int x = 23;
	cout << "\n\n\n\n\tVor dem Funktionsaufruf callByValue\n";
	cout << "\tx = " << x << "\n\n";
	callByValue(x);
	cout << "\n\tNach dem Funktionsaufruf callByValue\n";
	cout << "\tx = " << x << "\n\n\n\n";

	cout << "\n\tAchtung: Was ist anders als gerade! Achte auf die Werte!\n";
	cout << "\t========================================================\n\n";
		
	x = 23; // Diese Zeile ist eigentlich ueberfluessig, da x sowie gleich 23 ist.
	        // So dachte ich, ist es vielleicht auf den ersten Blick eindeutiger.
	cout << "\tVor dem Funktionsaufruf callByReference\n";
	cout << "\tx = " << x << "\n\n";
	callByReference(x);
	cout << "\n\tNach dem Funktionsaufruf callByRefrence\n";
	cout << "\tx = " << x << "\n\n\n\n";
	cout << "\tProgrammende....";
	return 0;
}

void callByValue(int a) {
	cout << "\tIn der Funktion callByValue\n";
	a = a + 1;
	cout << "\tx = " << a << "\n";
}

void callByReference(int& a) {
	cout << "\tIn der Funktion callByReference\n";
	a = a + 1;
	cout << "\tx = " << a << "\n"; 
}

