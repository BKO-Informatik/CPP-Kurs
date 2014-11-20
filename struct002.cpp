#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Adresse{
	string vorname;
	string nachname;
	string telefonnummer;
	string alter;

};

void printAdresse(const Adresse& tmp);
void wertEinlesen(Adresse& tmp);

int main() {
	vector<Adresse> adressVector;
	Adresse tmp;
	wertEinlesen(tmp);
	adressVector.push_back(tmp);
	wertEinlesen(tmp);
	adressVector.push_back(tmp);

	for (auto i : adressVector)
		printAdresse(i);

	return 0;
}

void printAdresse(const Adresse& tmp){
	cout << "---------------------------------\n";
	cout << "Funktion zum Ausgeben der Adresse\n";
	cout << "---------------------------------\n";
	cout << "Vorname: " << tmp.vorname << endl;
	cout << "Nachname: " << tmp.nachname << endl;
	cout << "Tel: " << tmp.telefonnummer << endl;
	cout << "Alter: " << tmp.alter << endl;
	cout << "\n\n\n";
}

void wertEinlesen(Adresse& tmp) {
	string vorname;
	string nachname;
	string telefonnummer;
	string alter;
	cout << "vorname: ";
	getline(cin, vorname);
	cout << "nachname: ";
	getline(cin, nachname);
	cout << "telefonnummer: ";
	getline(cin, telefonnummer);
	cout << "alter: ";
	getline(cin, alter);
	tmp.vorname = vorname;
	tmp.nachname = nachname;
	tmp.telefonnummer = telefonnummer;
	tmp.alter = alter;
}



	