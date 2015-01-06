
#include <iostream>
#include <string>

using namespace std;

void printName(string name);

int main() {
    const string NAME = "Alice Wonderland";
	printName(NAME);
}

void printName(string name) {
    for(int i = 0; i != 100; ++i)
	    cout << name << endl;
}