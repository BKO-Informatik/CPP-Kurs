
#include <iostream>

using namespace std;

double mulThree(double x, double y, double z);

int main() {
	double a = 0.0, b = 0.0, c = 0.0;
	cout << "Bitte geben Sie eine Zahl ein: ";
	cin >> a;
	cout << "Bitte geben Sie eine Zahl ein: ";
	cin >> b;
	cout << "Bitte geben Sie eine Zahl ein: ";
	cin >> c;
	cout << "Die Multiplikation der drei Zahlen lautet " << mulThree(a, b, c) << "\n";
}

double mulThree(double x, double y, double z) {
    return x * y * z;
}