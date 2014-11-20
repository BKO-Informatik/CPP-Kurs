#include <iostream>

using namespace std;
	
int main(){

	double b = 0.0;
	double a = 0.0;
	double c = 100;

		cout << " Bitte Anzahl der gefhrenen Kilometer angeben: " ;
	cin >> a;
	cout << " Bitte Benzinverbrauch in Litern eingeben: ";
	cin >> b;
	double summe = (b / a) * c;
	cout << " Der Verbrauch pro 100 km betraegt " << summe << " Liter " \n;

	return 0 ;

}