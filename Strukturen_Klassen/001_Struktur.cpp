#include <iostream>
#include <string>

using namespace std;

struct Adresse{
	string vorname;
	string nachname;
	string telefonnummer;
	unsigned int alter;

};

void printAdresse(const Adresse& tmp);

int main() {
	Adresse aA;
	aA.vorname = "Frank";
	aA.nachname = "van den Boom";
	aA.telefonnummer = "0177-123456789";
	aA.alter = 39;

	Adresse aB;
	aB.vorname = "Uwe";
	aB.nachname = "Seeler";
	aB.telefonnummer = "0177-123456789";
	aB.alter = 68;

	printAdresse(aA);
	printAdresse(aB);


	return 0;

}

void printAdresse(const Adresse& tmp) {
	cout << "Vorname: " << tmp.vorname << endl;
	cout << "Nachname: " << tmp.nachname << endl;
	cout << "Tel: " << tmp.telefonnummer << endl;
	cout << "Alter: " << tmp.alter << endl;
	cout << "\n\n\n";
}
