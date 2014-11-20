#include <iostream>
using namespace std;

// Deklaration der Funktion calcSum
double calcSum(double a, double b);  

int main() {
	const int SIZE = 10;
	while (1) {
		for (int i = 0; i != SIZE; i++) {
			cout << calcSum(i, i + 1) << endl;
		}
		int x = 0;
		cout << "Wollen Sie nochmal die Schleife druchlaufen lassen?\n";
		cout << "Dann geben Sie einen Wert ungleich 0 ein.\n";
		cout << "Bei allen anderen Werten wird die Schleife wiederholt\n";
		cin >> x;
		if (x == 0)
			return 0;
	}
	return 0;
}

// Definition der Funktion cacSum
double calcSum(double a, double b) {
	cout << "Die Summe von " << a << " und " << b << " ist:\t ";
	return a + b;
}