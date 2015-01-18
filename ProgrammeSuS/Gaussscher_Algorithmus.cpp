#include <iostream>
#include <string>

/*

Dieses Programm von Sven funktioniert noch nicht....
ich habe ein Programm geschrieben, das den Gaußschen Algorithmus berechnet.
In dem Programm ist aber noch ein kleiner Fehler, denn es klappt nur mit folgenden Punkten.
 
P1 (-5|6)
P2 (-3|-4)
P3 (3|14)
*/

using namespace std;

double a1minusa2(double b1, double b2){
	return (b1 * b1) - (b2 *b2);
}

double a1minusa3(double b1, double b3){
	return (b1 * b1) - (b3 * b3);
}

double b1minusb2(double b1, double b2){
	return b1 - b2;
}

double b1minusb3(double b1, double b3){
	return b1 - b3;
}

double y1minusy2(double y1, double y2){
	return y1 - y2;
}

double y1minusy3(double y1, double y3){
	return y1 - y3;
}

double mulout(double b1, double b2, double b3){
	return 8 / b1minusb2(b1, b2);
}

double a6(double b1, double b2, double b3){
	return a1minusa2(b1, b2) * mulout(b1, b2, b3);
}

double b6(double b1, double b2, double b3){
	return b1minusb2(b1, b2) * mulout(b1, b2, b3);
}

double y6(double y1, double y2, double b1, double b2, double b3){
	return y1minusy2(y1, y2) * mulout(b1, b2, b3);
}

double a7(double b1, double b2, double b3){
	return a6(b1, b2, b3) + a1minusa3(b1, b3);
}

double b7(double b1, double b2, double b3){
	return b1minusb3(b1, b3) + b6(b1, b2, b3);
}

double y7(double y1, double y2, double y3, double b1, double b2, double b3){
	return y1minusy3(y1, y3) + y6(y1, y2, b1, b2, b3);
}

double wiegrossista(double b1, double b2, double b3, double y1, double y2, double y3){
	return y7(y1, y2, y3, b1, b2, b3) / a7(b1, b2, b3);
}

double wiegrossistb(double b1, double b2, double b3, double y1, double y2, double y3){
	return (y1minusy2(y1, y2) - (wiegrossista(b1, b2, b3, y1, y2, y3) * a1minusa2(b1, b2))) / b1minusb2(b1, b2);
}

double wiegrossistc(double b1, double b2, double b3, double y1, double y2, double y3){
	return y1 - (b1 * b1 * wiegrossista(b1, b2, b3, y1, y2, y3) + b1 * wiegrossistb(b1, b2, b3, y1, y2, y3));
}

int main(){

	double a1 = 0.0;
	double a2 = 0.0;
	double a3 = 0.0;

	double b1 = 0.0;
	double b2 = 0.0;
	double b3 = 0.0;

	double y1 = 0.0;
	double y2 = 0.0;
	double y3 = 0.0;

	cout << "Dieses Programm berechnet aus drei Punkten eine quadratische Funktion." << endl << endl << endl
		 << "\t----------------" << endl
		 << "\t|f(x)=ax^2+bx+c|" << endl
		 << "\t----------------" << endl << endl << endl;

	cout << "-----------------------------------" << endl
	     << "Geben Sie nun den ersten Punkt ein." << endl 
		 << "-----------------------------------" << endl << endl
		 << "x = ";
	cin >> b1;

	cout << endl << "y = ";
	cin >> y1;

	cout << endl << endl
	     << "-----------------------------------" << endl
		 << "Geben Sie nun den ersten Punkt ein." << endl
		 << "-----------------------------------" << endl << endl
		 << "x = ";
	cin >> b2;

	cout << endl << "y = ";
	cin >> y2;

	cout << endl << endl
		<< "-----------------------------------" << endl
		<< "Geben Sie nun den ersten Punkt ein." << endl
		<< "-----------------------------------" << endl << endl
		<< "x = ";
	cin >> b3;

	cout << endl << "y = ";
	cin >> y3;

	cout << endl << endl
		 << "Ihre Funktion lautet: "
		 << "f(x)=" << wiegrossista(b1, b2,b3, y1, y2, y3) << "x^2+" << wiegrossistb(b1, b2, b3, y1, y2, y3) << "x+" << wiegrossistc(b1, b2, b3, y1, y2, y3) << endl; 

	string tmp;
	getline(cin, tmp);
	getline(cin, tmp);

	return 0;
}







