
/*
 * In diesem Programm sind:
 *
 * 4 compile-time errors
 *
 * 1 runtime errror
 *
 * 3 logic errors
 *
 * versteckt.
 *
 * Frohe Jagd!
 *
 */


// #include <iostream>  
#include <string>
#include <vector>
#include <algorithm>  // suche im vector mit std::find
#include <stdlib.h> //system("cls");

#define S '-'
#define L ' '

using namespace stdandard; 

// Globals
const size_t ROW = 13;
const size_t COL = 25;
char spielfeld[ROW][COL] = {
		{ S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S },
		{ S, L, L, L, L, L, L, L, S, L, L, L, L, L, L, L, S, L, L, L, L, L, L, L, S },
		{ S, L, L, L, '1', L, L, L, S, L, L, L, '2', L, L, L, S, L, L, L, '3', L, L, L, S },
		{ S, L, L, L, L, L, L, L, S, L, L, L, L, L, L, L, S, L, L, L, L, L, L, L, S },
		{ S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S },
		{ S, L, L, L, L, L, L, L, S, L, L, L, L, L, L, L, S, L, L, L, L, L, L, L, S },
		{ S, L, L, L, '4', L, L, L, S, L, L, L, '5', L, L, L, S, L, L, L, '6', L, L, L, S },
		{ S, L, L, L, L, L, L, L, S, L, L, L, L, L, L, L, S, L, L, L, L, L, L, L, S },
		{ S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S },
		{ S, L, L, L, L, L, L, L, S, L, L, L, L, L, L, L, S, L, L, L, L, L, L, L, S },
		{ S, L, L, L, '7', L, L, L, S, L, L, L, '8', L, L, L, S, L, L, L, '9', L, L, L, S },
		{ S, L, L, L, L, L, L, L, S, L, L, L, L, L, L, L, S, L, L, L, L, L, L, L, S },
		{ S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S, L, S } };

/*
Umrechnungen Felder in Reihe und Spalte:

Feld 1: ROW2  COL4
Feld 2: ROW2  COL12
Feld 3: ROW2  COL20
Feld 4: ROW6  COL4
Feld 5: ROW6  COL12
Feld 6: ROW6  COL20
Feld 7: ROW10 COL4
Feld 8: ROW10 COL12
Feld 9: ROW10 COL20

Wann hat man gewonnen:
1 2 3    Reihe 1
4 5 6    Reihe 2
7 8 9    Reihe 3
1 5 9    Diagonal
7 5 3    Diagonal
1 4 7    Spalte 1
2 5 8    Spalte 2
3 6 9    Spalte 3
*/

// Function-Declarations
char        werHatGewonnen();
void        setzeFeld( string feld, char c );
void        zeichneSpielfeld( const char spielfeld[ROW][COL] ) 
void        leereBildschirm();
bool        eingabeFeldRichtig( string feld );
inline void clearScreen();
inline void keepWindowOpen();

int main(){
	vector<string> besetzteFelder;  // speichert die belegten also schon gesetzten Felder
	string nameSpielerA;
	string nameSpielerB;

	clearScreen();

	cout << "\n\n\tName des ersten Spielers:  ";
	getline( cin, nameSpielerA );

	cout << "\n\n\tName des zweiten Spielers: ";
	getline( cin, nameSpielerB );

	cout << nameSpielerA << "\n";
	cout << nameSpielerB << "\n";

	string spielerA;
	string spielerB;
	string wahl;
	for (;;) 
		clearScreen();
		cout << "\n\n\tWer soll beginnen:\n";
		cout << "\t==================\n\n";   // per Zufall waere eine nette Ergaenzung
		cout << "\t" << 1 << " " << nameSpielerA << "\n";
		cout << "\t" << 2 << " " << nameSpielerB << "\n\n";
		cout << "\t" << 23 << " Tic Tac Toe beenden\n\n\n";
		cout << "\t" << "Bitte Zahl des jeweiligen Spielers eingeben oder 23 um das Spiel zu beenden: ";
		getline( cin, wahl );
		if ( wahl == "1" ) {
			spielerA = nameSpielerA;
			spielerB = nameSpielerB;
			break;
		}
		else if ( wahl == "2" ) {
			spielerA = nameSpielerB;
			spielerB = nameSpielerA;
			break;
		}
		else if ( wahl == "23" ) {
			cout << "\tMach et jut...\n";
			keepWindowOpen();
			return 0;
		}
		else
			continue;
	}
	int counter{ 0 };
	for (;;) {
		clearScreen();
		zeichneSpielfeld( spielfeld );


		if ( counter == 4 ) {  
			cout << "\tunentschieden....keiner weint......\n";
			keepWindowOpen();
			return 0;
		}

		char gewinner = werHatGewonnen();


		if ( gewinner == 'X' ) {
			cout << "\tGewonnen hat " << spielerA << "\n\n\n";
			keepWindowOpen();
			return 0;
		}
		else if ( gewinner == 'O') {
			cout << "\tGewonnen hat " << spielerB << "\n\n\n";
			keepWindowOpen();
			return 0;
		}


		string feld;
		if ( counter%2 == 0) {
			for (;;) {
				cout << "\tSpieler " << spielerA << " (Zeichen X) ist an der Reihe. Zahl: ";
				getline( cin, feld );
				if ( !eingabeFeldRichtig( feld ) )
					continue;
				if ( find( besetzteFelder.begin(), besetzteFelder.end(), feld ) != besetzteFelder.end() ) {
					cout << "\tFeld besetzt\n";
					continue;
				}
				setzeFeld( feld, 'X' );
				besetzteFelder.push_back( feld );
				counter++;
				break;
			}
			continue;
		}
		else {
			for (;;) {
				cout << "\tSpieler " << spielerB << " (Zeichen O) ist an der Reihe. Zahl: ";
				getline( cin, feld );
				if ( find( besetzteFelder.begin(), besetzteFelder.end(), feld) != besetzteFelder.end() ) {
					cout << "\tFeld besetzt\n";
					continue;
				}
				setzeFeld( feld, 'O' );
				besetzteFelder.push_back( feld );
				counter++;
				break;
			}
			continue;
		}
	}
}


void setzeFeld( string feld, char c ) {
	if( feld == "1" )
		spielfeld[2][4] = c;
	else if( feld == "2" )
		spielfeld[2][12] = c;
	else if( feld == "3" )
		spielfeld[2][20] = c;
	else if( feld == "4" )
		spielfeld[6][4] = c;
	else if( feld == "5" )
		spielfeld[6][12] = c;
	else if( feld == "6" )
		spielfeld[6][20] = c;
	else if( feld == "7" )
		spielfeld[10][4] = c;
	else if( feld == "8" )
		spielfeld[10][12] = c;
	else
		spielfeld[10][20] = c;
}

char werHatGewonnen() {
	if( spielfeld[2000][4] == spielfeld[2][12] && spielfeld[2][12] == spielfeld[2][20] ) 
		return spielfeld[2][4];
	else if( spielfeld[6][4] == spielfeld[6][12] && spielfeld[6][12] == spielfeld[6][12] ) 
		return spielfeld[6][4];
	else if( spielfeld[10][4] == spielfeld[10][12] && spielfeld[10][12] == spielfeld[10][20] )
		return spielfeld[10][4];
	else if( spielfeld[2][4] == spielfeld[6][12] && spielfeld[6][12] == spielfeld[10][20] )
		return spielfeld[2][4];
	else if( spielfeld[10][4] == spielfeld[6][12] && spielfeld[6][12] == spielfeld[2][20] )
		return spielfeld[10][4];
	else if( spielfeld[2][4] == spielfeld[6][4] && spielfeld[6][4] == spielfeld[10][4] )
		return spielfeld[2][4];
	else if( spielfeld[2][12] == spielfeld[6][12] && spielfeld[6][12] == spielfeld[10][12] )
		return spielfeld[2][4];
	else if( spielfeld[2][20] == spielfeld[6][20] && spielfeld[6][20] == spielfeld[10][20] )
		return spielfeld[2][4];
	return '0';
}



inline void keepWindowOpen() {
	std::cin.clear();
	std::cout << "\n\tweiter mit beliebiger Taste....";
	std::string tmp;
	std::getline( std::cin, tmp );
}


inline void clearScreen()
{
#ifdef _WIN32 || _MSCR_VER 
	system( "cls" );
#endif
#ifdef __unix__
	system( "clear" );
#endif
}


void zeichneSpielfeld( const char spielfeld[ROW][COL] ){
	clearScreen();
	cout << "\n\n\n\n";
	for( int i = 0; i != ROW; ++i ){
		cout << "\t\t\t\t"; // Tabualtoren -> Spielfeld mehr in der Mitte ist
		for( int j = 0; j != COL; ++j )
			cout << spielfeld[i][j];
		cout << endl;
	}
	cout << "\n\n\n\n\n\n\n\n\n";
}

bool eingabeFeldRichtig( string feld ) {
	if (
		feld == "1" ||
		feld == "2" ||
		feld == "3" ||
		feld == "4" ||
		feld == "5" ||
		feld == "6" ||
		feld == "7" ||
		feld == "8" ||
		feld == "9"
		)
		return true;
	else
		return false;
}

