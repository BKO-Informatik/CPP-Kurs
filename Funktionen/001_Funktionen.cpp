
#include <iostream>
#include <string>

using namespace std;

// ein paar Funktionsdeklerationen
// Die Funktionsdefinitionen findest Du unten.
// Weisst Du noch was der Unterschied zwischen einer 
// Definition und einer Deklaration ist ???
void schreibeEinPaarZeichen();
double addiereZweiZahlen(double a, double b);
double addiereDreiZahlen(double a, double b, double c);
double addiereVierZahlen(double a, double b, double c, double d);
double addiereZuEinerZahlDrei(double a);
double addiereZuEinerZahlVier(double a);

void schreibeEinenStringNmal(int anzahl, string s);


int main(){
    schreibeEinPaarZeichen(); // hier wird die Funktion schreibeEinPaarZeichen aufgerufen

    double x = addiereZweiZahlen(1, 2);
    cout << x << "\n";  // x = 3

    cout << addiereVierZahlen(1, 2, 3, 4) << "\n";  // 10 wird ausgegeben

    cout << addiereZuEinerZahlDrei(3) << "\n"; // 6 wird ausgegeben

    x = addiereZuEinerZahlVier(2); // x = 6
    cout << x << "\n";

    x = x + addiereVierZahlen(x, x, x, x);
    cout << x << "\n";  // Was wird hier ausgegeben???

}

// die Funktionsdefinitionen zu den oben geschriebenen Deklarationen
void schreibeEinPaarZeichen() {
    cout << "Hallo, ich bin die Unterfunktion\n";
    cout << "void schreibeEinPaarZeichen()\n";
    cout << "Ich gebe nicht zuruek, deshalb findest Du\n";
    cout << "in mir kein return.\n";
    cout << "Und darum steht void in der Funktionssignatur.\n";
}

double addiereZweiZahlen(double a, double b) {
    return a + b;
}

double addiereDreiZahlen(double a, double b, double c) {
    return a + b + c;
}

// Schau Dir genau an, was hier passiert...kannst Du das nachvollziehen?
double addiereVierZahlen(double a, double b, double c, double d) {
    return addiereZweiZahlen(a, b) + addiereZweiZahlen(c, d);
}

double addiereZuEinerZahlDrei(double a) {
    return a + 3;
}

double addiereZuEinerZahlVier(double a) {
    return a + 4;
}


void schreibeEinenStringNmal(int anzahl, string s) {
    for(int i = 0; i != anzahl; ++i)
        cout << s << "\n";
}
