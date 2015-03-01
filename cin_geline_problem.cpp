
#include <iostream>
#include <string>

using namespace std;

int main() {
    string wort;
    double d;

    cout << "Zahl eingeben: ";
    cin >> d;

    cout << "Wort eingeben: ";
    getline(cin, wort);  // ups.... cin laesst das \n in stream
                         // und getline liest es direkt.....

    cout << endl;

    cout << "Zahl eingeben: ";
    cin >> d;
    cout << "Wort eingeben: ";
    cin >> wort;

    cout << d << " " << wort << endl;

}


