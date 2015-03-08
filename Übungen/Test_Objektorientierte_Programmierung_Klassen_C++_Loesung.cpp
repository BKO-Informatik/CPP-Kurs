
#include <iostream>
#include <string>
using namespace std;

class Aufgabe {
    private:
        string mName;
        int mSchwierigkeit;
        int mWichtigkeit;
    public:
        Aufgabe(string n = "leer", int s = 10, int w = 11):
            mName(n), mSchwierigkeit(s), mWichtigkeit(w) { cout << "Konstruktor der Klasse Aufgabe\n"; }
        // Getter und Setter
        string getName() const;
        int    getSchwierigkeit() const;
        int    getWichtigkeit() const;
        void   setName(string n);
        void   setSchwierigkeit(int s);
        void   setWichtigkeit(int w);
        // Methode zum Ausgeben der Klasse
        void   gebeAufgabeAufBildschirmAus() const;
};

string Aufgabe::getName() const {
    return mName;
}

int Aufgabe::getSchwierigkeit() const {
    return mSchwierigkeit;
}

int Aufgabe::getWichtigkeit() const {
    return mWichtigkeit;
}

void Aufgabe::setName(string n) {
    mName = n;
}

void Aufgabe::setSchwierigkeit(int s) {
    mSchwierigkeit = s;
}

void Aufgabe::setWichtigkeit(int w) {
    mWichtigkeit = w;
}

void Aufgabe::gebeAufgabeAufBildschirmAus() const {
    cout << "\n\n";
    cout << "\tName: " << mName << "\n";
    cout << "\tSchwierigkeit: " << mSchwierigkeit << "\n";
    cout << "\tWichtigkeit: " << mWichtigkeit << "\n";
    cout << "\n";
}

int main() {
    Aufgabe a("Zimmer putzen", 0, 3);
    Aufgabe b("Zufrieden sein", 3, 3);
    a.gebeAufgabeAufBildschirmAus();
    b.gebeAufgabeAufBildschirmAus();
}

// Ausgabe des Programmes:
/*

Konstruktor der Klasse Aufgabe
Konstruktor der Klasse Aufgabe


	Name: Zimmer putzen
	Schwierigkeit: 0
	Wichtigkeit: 3



	Name: Zufrieden sein
	Schwierigkeit: 3
	Wichtigkeit: 3

*/    
