#include <iostream>
#include <string>
#include <cmath>


using namespace std;

double berechneHypo(double a, double b) {
    return sqrt(a*a + b*b);
}

double benutzerEingabe(double a, string frage) {
    string tmp;
    // Kommentar A
    while(1) {
        cout << frage;
        getline(cin, tmp);
        try { // versuche
            a = stod(tmp); // string to double - tmp -> a
        } catch (...) { // bei jedem Fehler / Ausnahme die auftritt
            cout << "Falsche eingabe...\n";
            continue; // mache wieder mit der while-Schleife weiter (Kommentar A)
        }
        if (a <= 0.0) {
            cout <<  "Kathete darf nicht kleiner gleich 0 sein\n"; 
            continue; // mache wieder mit der while-Schleife weiter
        }
        return a;
    }
}
    

int main() {
    double a = benutzerEingabe(a, "Kathete a: "); 
    double b = benutzerEingabe(b, "Kathete b: ");
    cout << "Die Hypothenuse ist: " << berechneHypo(a, b) << endl;
}
