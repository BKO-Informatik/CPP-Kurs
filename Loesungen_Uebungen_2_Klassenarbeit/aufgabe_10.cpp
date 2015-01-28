
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>   // accumulate

using namespace std;


int main() {
	const int MESSWERTE = 10;
	vector<double> dVec;
	for (int i = 0; i != MESSWERTE; ++i) {
		cout << "Messwert " << i + 1 << " : ";
		double wert;
		cin >> wert;
		dVec.push_back(wert);
	}
	sort(dVec.begin(), dVec.end());
	cout << "Kleinster Wert: " << dVec[0] << endl;
	cout << "Groesster Wert: " << dVec[dVec.size() - 1] << endl;
	double mittelwert = accumulate(dVec.begin(), dVec.end(), 0) / dVec.size();
	cout << "Mittelwert: " << mittelwert << endl;

	return 0;
}