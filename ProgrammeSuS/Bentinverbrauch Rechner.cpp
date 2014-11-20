// Dieses Programm fragt den Benutzer nach zwei Kommazahlen.
// Die Summe wird berechnet und auf der Konsole ausgeben.
//
// Als Datentyp wird double verwendet.
// 
#include <iostream>

using namespace std;

int main(){
	double a = 0.0;
	double b = 0.0;
	double c = 100.0;
	cout << "Bitte Verbrauch eingeben: ";
	cin >> a;
	cout << "Bitte Gefahrene Kilometer eingeben: ";
	cin >> b;
	
	double produkt = (a / b)*c;
	cout << "Die Summe ist: " << produkt << "\n";

	
	cout << "Die Summe von " << a << " und " << b
		<< c << " ist: " << (a / b)*c << "\n";
	cout << "Das Produkt ist der spritverbrauch";

	return 0;
}

