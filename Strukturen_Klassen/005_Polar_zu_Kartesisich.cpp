

#include <iostream>
#include <string>

using namespace std;

class PolarKoordinate {
    private:
        double mRadius;
        double mWinkel;
        string mNamePunkt;
    public:
        PolarKoordinate(double radius = 0.0, double winkel = 0.0);
        void gebePolarKoordinateAus() const;
};

PolarKoordinate::PolarKoordinate(double radius, double winkel):mRadius(radius), mWinkel(winkel) {
    cout << "Konstruktor der Klasse: PolarKoordinate\n";
};

void PolarKoordinate::gebePolarKoordinateAus() const {
    cout << "Radius: " << mRadius << endl;
    cout << "Winkel: " << mWinkel << endl;
};


int main() {
    PolarKoordinate a;
    PolarKoordinate b(45, 100);
    a.gebePolarKoordinateAus();
    b.gebePolarKoordinateAus();
}
    
