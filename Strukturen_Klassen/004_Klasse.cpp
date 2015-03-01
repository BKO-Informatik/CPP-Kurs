#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Mensch {
private:
        // Member bzw. Daten
        string mName;
        string mJahr;
        unsigned int mAlter;
public:
        // Konstruktor
        Mensch(string m="leer", string j="2014", unsigned int a=23)
                :mName(m), mJahr(j), mAlter(a){}
        Mensch(unsigned int a) :mName("leer"), mJahr("2000"), mAlter(a){}
        // Methoden - Setter und Getter
        void setJahr(string s) {
                if (s == "0")
                        mJahr = "fehler";
                else
                        mJahr = s;
        }
        // Methoden
        void druckeMensch() const; // Deklarationen
        string getName() const;
};

string Mensch::getName() const {
        return mName;
}
void Mensch::druckeMensch() const {
        cout << "Name: " << mName << endl;
        cout << "Alter: " << mAlter << endl;
        cout << "Jahr: " << mJahr << endl;
        cout << "-----------------------------------\n";
}

int main() {
        Mensch a("Tim", "3v.Ch.", 23);  // a ist eine Instanz der Klasse Mensch
        Mensch b("Peter", "2n.Ch", 19);
        Mensch c("Frank");
        Mensch d("Frank", "hallo");
        Mensch e(44);
        vector<Mensch> mVec;
        mVec.push_back(a);
        mVec.push_back(b);
        mVec.push_back(c);
        mVec.push_back(d);
        mVec.push_back(e);
        //{a, b, c, d, e}   a.druckeMensch() b.druckeMensch()
        for (auto i : mVec) {
                i.druckeMensch();
        }
        mVec[1].druckeMensch();
        mVec[0].druckeMensch();
        return 0;
}
