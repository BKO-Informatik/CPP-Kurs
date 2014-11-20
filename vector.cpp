#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	vector<int> iVec;
	for (int i = 0; i != 5; i++){
		iVec.push_back(i);
	}
	int summe = 0;
	// summe des vector berechnen
	cout << summe << endl;
	for (auto i : iVec)
		cout << i << endl;
	return 0;
}

