#include <iostream>

using namespace std;

int main() {
    // Array mit einer festen Anzahl
    int array[] = {1, 2, 3, 4};

    cout << array[0] << " " << array[1] << " " << array[2] << endl;
    
    for(int i = 0; i < 4; ++i) {
        cout << array[i] << endl;
        if(i==3) {
            cout << "-------------\n";
        }
    }

    for(int i = 0; i < 4; ++i) {
        array[i] = i * i;
    }

    for(int i = 0; i < 4; ++i) {
        cout << array[i] << endl;
        if(i==3) {
            cout << "-------------\n";
        }
    }

    // Frage 1:
    // 2D Array (Feld) mit ??? Spalten und ??? Zeilen

    // Frage 2:
    // 4 entspricht ???
    
    // Frage 3:
    // 3 entspricht ???
    int array2D[4][3] = { {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
    
    cout << array2D[0][0] << " " << array2D[0][1] << " " << array2D[3][1] << " ";

    // Frage 4:
    // Gebe mit zwei verschachtelten for-Schleifen das 2D Array aus so
    // das es so aussieht:
    // 1 2 3
    // 4 5 6
    // 7 8 9 
    // 10 11 12
    
    // Frage 5:
    // Entwerfe einen Algorithmus, der ein Array von Zahlen ihrer Groesse
    // nach sortiert. Das sortierte Array soll mit der kleinsten Zahl beginnen.
    // Frage 6:
    // Dokumentiere Deinen Algorithmus mit Hilfe eines Struktograms.
}

/* Ausgabe des Programms:

1 2 3
1
2
3
4
-------------
0
1
4
9
-------------
1 2 11 

*/
