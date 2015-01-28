
#include <iostream>

using namespace std;

long long calcFakul(int x) {
	long long f = 1;
	if (x == 0)
		return 1;
	else if (x == 1)
		return 1;
	else
		for (int i = 1; i != x + 1; ++i)
			f = f * i;
	return f;
}


int main() {
	while (true) {
		int z = 0;
		cout << "Fakultaet von: ";
		cin >> z;
		if (z < 0)
			break;
		cout << calcFakul(z) << endl;
	}

	return 0;
}