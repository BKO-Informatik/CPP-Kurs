


#include <iostream>
#include <string>

using namespace std;

string returnGreaterStringOfTwo(string a, string b) {
	if (a.length() >= b.length())
		return a;
	else
		return b;
}

int main() {
	cout << "Geben Sie string sA ein: ";
	string sA;
	getline(cin, sA);
	cout << "Geben Sie string sB ein; ";
	string sB;
	getline(cin, sB);
	cout << returnGreaterStringOfTwo(sA, sB);
	return 0;
}