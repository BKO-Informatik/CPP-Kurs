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
#include <map>
#include <time.h>    // time for random seed
#include <stdlib.h>  // srand, rand

using namespace std;


int main() {
    srand (time(NULL));
    vector<int> iVec { 3, 6, 9, 12, 15, 18 };
    const size_t SIZE = 5;
    vector<int> histogramm(SIZE); // make a vector of size 5


    for(int i=0; i!= 200; ++i)
        ++histogramm[rand()%5];  // random number between 0 and 5

    for(size_t i=0; i!=histogramm.size(); ++i) {
        cout << i << "\t";
        for(int j = 0; j!=histogramm[i]; ++j)
            cout << "*";
        cout << "\n";
    }

}
