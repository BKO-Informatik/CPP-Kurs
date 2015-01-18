

#include <string>
#include <iostream>

using namespace std;

void printNameNTimes(string name, int times);


int main() {
    cout << "Wie lautet der Name: ";
	string name;
	getline(cin, name);
	cout << "Wie oft soll der Name ausgeben werden: ";
	int n;
	cin >> n;
	printNameNTimes(name, n);
}

void printNameNTimes(string name, int times) {
    for(int i = 0; i != times; ++i)
	    cout << name << endl;
}