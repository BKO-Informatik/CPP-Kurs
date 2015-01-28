
#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct Aufgabe {
    string titel;
    string jahr;
    string monat;
    string tag;
    string stunde;
    string minute;
    int stressfaktor;
    int spassfaktor;
};

int main() {
    cout << "Titel: ";
    string titel;
    getline(cin, titel);
    cout << "Jahr: ";
    string jahr;
    getline(cin, jahr);

    Aufgabe a;
    a.titel = titel;
    a.jahr = jahr;


    cout << "\n\t--------------------------\n";
    cout << "\tTitel:\t" << a.titel << "\n";
    cout << "\tJahr:\t" << a.jahr << "\n";
}



