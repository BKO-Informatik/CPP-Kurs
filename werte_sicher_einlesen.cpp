#include <iostream>
#include <string>
#include <cmath>


using namespace std;

double berechneHypo(double a, double b) {
    return sqrt(a*a + b*b);
}


int main() {
    string tmp;
    double a = 0.0;
    double b = 0.0;
    while(1) {
        cout << "Bitte Kathete a: ";
        getline(cin, tmp);
        try {
            a = stod(tmp);
        } catch (...) {
            cout << "Falsche eingabe...\n";
            continue;
        }
        if (a <= 0.0) {
            cout << "Kathete darf nicht kleiner gleich Null sein...\n";
            continue;
        }
        break;
    }
    while(1) {
        cout << "Bitte Kathete b: ";
        getline(cin, tmp);
        try {
            b = stod(tmp);
        } catch (...) {
            cout << "Falsche eingabe...\n";
            continue;
        }
        if (b <= 0.0) {
            cout << "Kathete darf nicht kleiner gleich Null sein...\n";
            continue;
        }
        break;
    }    

    cout << berechneHypo(a, b) << endl;
}
