// Aufgabe 1)  Finden Sie 3 Compile-Time Fehler
// Aufgabe 2)  Ergänzen Sie den eigenen Datentyp umd die Felder Telefonnummer 
//             und Mail-Adresse
// Aufgabe 3)  Ergänzen Sie entsprechend zu Aufgabe 2 die Funktionen
//             printAdresse und wertEinlesen.


#include <iostream>
#include <string>
#include <vector>

using namespace standard;

struct Adresse{
	string vorname;
	string nachname;
	


};

void printAdresse( const Adresse& tmp );
void wertEinlesen( Adresse& tmp );

int main() {
	vector<Adresse> adressVector;
	Adresse tmp;
	werteinlesen( tmp );
	adressVector.push_back( tmp );
	wertEinlesen( tmp );
	adressVector.push_back( tmp );

	for ( auto i : adressVector )
		printAdresse(i);
	return 0
}

void printAdresse( const Adresse& tmp ) {
	cout << "---------------------------------\n";
	cout << "Funktion zum Ausgeben der Adresse\n";
	cout << "---------------------------------\n";
	cout << "Vorname: " << tmp.vorname << endl;
	cout << "Nachname: " << tmp.nachname << endl;
	cout << "\n\n\n";
}

void wertEinlesen( Adresse& tmp ) {
	string vorname;
	string nachname;
	cout << "vorname: ";
	getline(cin, vorname);
	cout << "nachname: ";
	getline(cin, nachname);
	tmp.vorname = vorname;
	tmp.nachname = nachname;
}