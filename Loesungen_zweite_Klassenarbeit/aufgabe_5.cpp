

#include <iostream>

using namespace std;

int main() {
    while(true) {
	    cout << "Bitte geben Sie eine Zahl ein: ":
		int i;
		cin >> i;
		if (i != 23 || i != 42) {
		   cout << "Dies ist kein guter Witz....\n";
		   break;
		}
	}
}