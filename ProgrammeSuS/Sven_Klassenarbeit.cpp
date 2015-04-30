#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline void halteFensterAuf(){
	cin.clear();
	cout << "beenden mit enter ..." << endl;
	string ende;
	getline(cin, ende);
	getline(cin, ende);
}

inline void loescheFenster(){
#if defined (_WIN32)
	system("cls");
#endif
#if defined (_linux_) || (_unix_)
	system("clear");
#endif
}

class Aufgabe{
private:
	string mName;
	int mSchwierigkeit;
	int mWichtigkeit;
public:
	Aufgabe(string n = "leer", int s = 10, int w = 11) : mName(n), mSchwierigkeit(s), mWichtigkeit(w){ }

	void setmName(string n);
	void setmSchwierigkeit(int s);
	void setmWichtigkeit(int w);

	string getmName()const;
	int getmSchwierigkeit()const;
	int getmWichtigkeit()const;

	void gebeAufgabeAufBildschirmAus()const;
};

void Aufgabe::setmName(string n){ mName = n; }
void Aufgabe::setmSchwierigkeit(int s){ mSchwierigkeit = s; }
void Aufgabe::setmWichtigkeit(int w){ mWichtigkeit = w; }

string Aufgabe::getmName()const{ return mName; }
int Aufgabe::getmSchwierigkeit()const{ return mSchwierigkeit; }
int Aufgabe::getmWichtigkeit()const{ return mWichtigkeit; }

void Aufgabe::gebeAufgabeAufBildschirmAus()const{
	cout << "\nName: " << mName << endl
		 << "Schwierigkeit: " << mSchwierigkeit << endl
		 << "Wichitgkeit: " << mWichtigkeit << endl << endl;
}

vector<Aufgabe> vAufgabe;

void benutzerGibtAufgabeEin() {
	
	cout << "Name: ";
	string n;
	getline(cin, n);
	cout << "Schwierigkeit: ";
	int s;
	cin >> s;
	cout << "Wichtigkeit: ";
	int w;
	cin >> w;

	Aufgabe p(n, s, w);
	vAufgabe.push_back(p);
}

int main(){
	string n;
	int s, w = 0;
	cout << "Programm wird gestarted ..." << endl << endl << endl;
	loescheFenster();
	benutzerGibtAufgabeEin();
	
	Aufgabe a;
	Aufgabe b("Tschuess", 5, 4);
	a.gebeAufgabeAufBildschirmAus();
	b.gebeAufgabeAufBildschirmAus();

	for (const auto i : vAufgabe)
		i.gebeAufgabeAufBildschirmAus();

	halteFensterAuf();
}
