/*
* ----------------------------------------------------------------------------
* "THE BEER-WARE LICENSE" (Revision 42):
* <phk@FreeBSD.ORG> wrote this file. As long as you retain this notice you
* can do whatever you want with this stuff. If we meet some day, and you think
* this stuff is worth it, you can buy me a beer in return Frank van den Boom  
* ----------------------------------------------------------------------------
*
* C++ course written by fvdb
* --------------------------
*
*
*/

// Simple example to generate random numbers. 

#include <iostream>
#include <vector>
#include <time.h>    // time for random seed
#include <stdlib.h>  // srand, rand

using namespace std;

unsigned getRandomNumberBetween(unsigned low, unsigned high) {
    // The function doesn't work for low = 0 and high = 1. 
    // See Mark A
    return rand()%high+low;
}

int main() {

    srand (time(NULL));
    vector<int> iVec { 3, 6, 9, 12, 15, 18 };
    const size_t SIZE = 30; 

    cout << "\nZufallszahl zwischen 2 und 1:\n";
    for(size_t i = 0; i != SIZE; ++i) 
        cout << getRandomNumberBetween(1, 2) << " ";  // zufallszahl zwischen 2 und 1

    cout << "\nZufallszahl zwischen 10 und 1:\n";
    for(size_t i = 0; i != SIZE; ++i) 
        cout << getRandomNumberBetween(1, 10) << " "; // zufallszahl zwischen 10 und 1

    cout << "\nZufallszahl zwischen 100 und 1:\n";
    for(size_t i = 0; i != SIZE; ++i) 
        cout << getRandomNumberBetween(1, 100) << " "; // zufallszahl zwischen 100 und 1

    // Mark A
    cout << "\nZufallszahl zwischen 1 und 0:\n";
    for(size_t i = 0; i != SIZE; ++i) 
        cout << rand()%2 << " "; // zufallszahl zwischen 1 und 0 
    
    cout << "\n\n\n";
}
/*

Zufallszahl zwischen 2 und 1:
1 2 2 2 2 2 1 1 2 1 2 1 2 1 2 1 1 1 2 2 2 1 2 1 2 2 2 2 1 2 
Zufallszahl zwischen 10 und 1:
3 7 2 6 9 3 7 5 4 10 9 1 3 2 7 4 2 9 4 9 8 5 10 3 5 7 1 3 10 3 
Zufallszahl zwischen 100 und 1:
92 64 19 53 10 7 76 86 73 31 18 11 81 52 84 57 55 16 18 50 96 17 57 67 10 83 65 52 15 5 
Zufallszahl zwischen 1 und 0:
1 0 1 1 0 0 0 1 0 0 1 1 1 1 0 0 0 0 1 1 1 1 1 1 1 0 0 0 1 0 

*/
