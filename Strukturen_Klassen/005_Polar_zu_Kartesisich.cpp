/*
 * Was biete ich Dir an!!
 *
 * Kompiliere dieses Programm und lasse es anschließend laufen.
 * Lese jede Zeile und versuche diese zu verstehen.
 * Lies jede Zeile ein zweites Mal und versuche wieder jede Zeile zu
 * verstehen.
 * Lies jede Zeile ein drittes Mal und versuche wieder jede Zeile zu
 * verstehen.
 * Lies jede Zeile ein viertes Mal und versuche wieder jede Zeile zu
 * verstehen.
 * Fange an, den Quellcode zu verändern. Schreibe Kommentare die Dir
 * helfen. Vertausche Ausgaben, ändere Variablennamen...
 * ...muss der Konstruktor so redelig sein?!?
 *
 * Sind Dinge unklar....dann frage Deine Mitschüler oder nutze das
 * Internet um gezielt nach Informationen zu suchen.
 * Sind Dinge immer noch unklar, dann frag mich!
 * Aber lieber wäre es mir, wenn Du in der Lage bist, Dir selber zu
 * helfen. Trozdem helfe ich Dir gerne!!!
 *
 * Erweiter das Programm um eine Klasse: KartesischeKoordinate.
 * Gucke dir an, wie ich es gemacht habe. Du sollst meinen Code
 * weiterbenutzen. Dieser soll erhalten bleiben.
 *
 * Gebe ein paar KartesischeKoordinaten ein, speicher diese in 
 * einem vector.
 * Lasse die Kartesischen Koordinaten ausgeben.
 *
 * Erweiter wieder das Programm. Es soll Polar Koordinaten in
 * Kartesische Koordinaten und umgekehrt berechnen.
 *
 * Du bist fertig! Absolut super! Eine tolle Leistung....jetzt
 * bist Du in der Lage komplexere Programme zu schreiben.
 *
 * Mail mir Dein Kunstwerk und ich kann Deine Leistung bewerten
 * und mit in die Zeugnisnote einfließen lassen.
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class PolarKoordinate {
    private:
        double mRadius;
        double mPhiWinkel;
        string mNamePunkt;
    public:
        PolarKoordinate(double radius = 0.0, double winkel = 0.0, string n = "Punkt");
        void gebePolarKoordinateAus() const;
        // Getter
        double getRadius() const;
        double getPhiWinkel() const;
        string getNamePunkt() const;
};

// Konstruktor ausserhalb der Klasse definiert
PolarKoordinate::PolarKoordinate(double radius, double winkel, string n):
    mRadius(radius), mPhiWinkel(winkel), mNamePunkt(n) {
    cout << "Konstruktor der Klasse: PolarKoordinate\n";
};

void PolarKoordinate::gebePolarKoordinateAus() const {
    cout << "\n\n\tName des Punktes: " << mNamePunkt << endl;
    cout << "\tRadius: " << mRadius << endl;
    cout << "\tWinkel: " << mPhiWinkel << endl;
};


double PolarKoordinate::getRadius() const {
    return mRadius;
}

double PolarKoordinate::getPhiWinkel() const {
    return mPhiWinkel;
}

string PolarKoordinate::getNamePunkt() const {
    return mNamePunkt;
}


// ekelige globale Variable
vector<PolarKoordinate> vPolarKoordinaten;

void benutzerGibtPolarKoordinateEin() {
    while(1) {
    cout << "Name Punkt der Polarkoordinate: ";
    string n;
    getline(cin, n);
    cout << "Radius: ";
    string r;
    getline(cin, r);
    cout << "Winkel Phi: ";
    string w;
    getline(cin, w);
    
    double radius = 0.0;
    double winkelPhi = 0.0;
    try {
        radius = stod(r);
        winkelPhi = stod(w);
    } catch(...){
        continue;
    }
    PolarKoordinate p(radius, winkelPhi, n);
    vPolarKoordinaten.push_back(p);
    break; 

    }
}

    

int main() {
    PolarKoordinate a;
    PolarKoordinate b(0, 0, "Ursprung");
    a.gebePolarKoordinateAus();
    b.gebePolarKoordinateAus();

    while(1){
    cout<< "Wie viele Polarkoordinaten wollen Sie ein geben: ";
    string n;
    unsigned int anzahl;
    getline(cin, n);
    try{
        anzahl = stoi(n);
    }catch(...) {
        continue;
    }
    for(unsigned int i = 0; i < anzahl; ++i)
        benutzerGibtPolarKoordinateEin();
    break;
    }

    for(const auto i : vPolarKoordinaten)
        i.gebePolarKoordinateAus();
}
    
