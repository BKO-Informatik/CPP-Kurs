#include <iostream>
#include <string>
#include <exception>

using namespace std;

int main() {
    double x1 = 0.0;
    double x2 = 0.0;
    double y1 = 0.0;
    double y2 = 0.0;

    while(1) {
        try {
            cout << "X1: ";
            string tmp;
            getline(cin, tmp);
            x1 = stod(tmp);
            break;
        } catch(...) {
            cout << "Fehler " << endl;
        }
    }
    while(1) {
       try {
           cout << "Y1: ";
           string tmp;
           getline(cin, tmp);
           y1 = stod(tmp);
           break;
       } catch(...) {
           cout << "Fehler " << endl;
       }
    } 
    while(1) {
       try {
           cout << "X2: ";
           string tmp;
           getline(cin, tmp);
           x2 = stod(tmp);
           break;
       } catch(...) {
           cout << "Fehler " << endl;
       }
    }
    while(1) {
       try {
           cout << "Y2: ";
           string tmp;
           getline(cin, tmp);
           y2 = stod(tmp);
           break;
       } catch(...) {
           cout << "Fehler " << endl;
       }
    }

    cout << "P1(" << x1 << "/" << y1 << ")" << endl;
    cout << "P2(" << x2 << "/" << y2 << ")" << endl;

    double steigung_m = (y2-y1)/(x2-x1);
    double achsenabschitt_b = y1 - steigung_m * x1;
    
    cout << "Steigung m: " << steigung_m << endl;
    cout << "Achsenabschnitt b: " << achsenabschitt_b << endl;

    
    string funkionsgleichung = "f(x) = ";
    if(steigung_m != 0) {
        funkionsgleichung = funkionsgleichung + to_string(steigung_m) + "x ";
    }
    else {
        funkionsgleichung = funkionsgleichung + "x ";
    }

    if(achsenabschitt_b > 0) {
        funkionsgleichung = funkionsgleichung + "+ " +  to_string(achsenabschitt_b);
    }

    cout << funkionsgleichung << endl;
}

