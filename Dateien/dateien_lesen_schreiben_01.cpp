#define DEBUG     // switch on or off

#ifdef DEBUG
#define DEBUG_MSG(str) do { std::cout << str << std::endl; } while (false);
#else
#define DEBUG_MSG(str) do { } while (false);
#endif

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <memory>

using namespace std;

inline void halteFensterAuf() {
	cin.clear();
	cout << "\n\tweiter mit der Enter-Taste....";
	string tmp;
	getline(cin, tmp);
}

inline void loescheFenster()
{
#if defined(_WIN32)
	system("cls");
#endif
#if defined(__linux__) || defined(__unix__) 
	system("clear");
#endif
}

// ekelige globale Variable...aber warum sind denn
// globale Variablen ekelig?
const string DATEINAME = "aufgaben.txt";

int main() {
	fstream mDateiStream;
	//mDateiStream.open(DATEINAME, fstream::out); // ueberschreiben
	mDateiStream.open(DATEINAME, fstream::app); // anhängen
	// Datei wird in beiden faellen angelegt wenn sie nicht existiert
	if (!mDateiStream) {
		DEBUG_MSG("Kann Datei nicht nutzen...\n");
	}
	mDateiStream << "hallo\n";
	mDateiStream << "test\n";
	mDateiStream.close();
	mDateiStream.clear();

	mDateiStream.open(DATEINAME, fstream::in);  // lesen
	if (!mDateiStream){
		DEBUG_MSG("Kann Datei nicht lesen...\n");
	}
	string zeile;
	while (getline(mDateiStream, zeile)){
		cout << zeile << endl;
	}
	mDateiStream.close();
	mDateiStream.clear();
	halteFensterAuf();
}
