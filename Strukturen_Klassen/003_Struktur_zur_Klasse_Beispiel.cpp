

#include <iostream>
#include <string>

struct Mensch {
        std::string name;
        int alter;
};

class MenschKlasse {
    private:
        std::string name;
        int alter;
    public:
        MenschKlasse(std::string n = "leer", int a = 0):name(n), alter(a) { }
        void printMensch() {
            std::cout << name << " " << alter;
        }
        void setName(std::string s) {
            name = s;
        }
};


void printMensch(Mensch m);
void setName(Mensch m, std::string s); 

int main() {

    Mensch A;
    Mensch B;

    A.name = "Frank";
    A.alter = 23;

    printMensch(A);
    setName(A, "Horst");
    printMensch(A);

    A.name = "Doofkopf";
    std::cout << A.name << "\n";

    MenschKlasse Ma("Supermann", 111);

    Ma.printMensch();

    // compile-time error
    // Ma.name ist private
    // Ma.name = "Doof";

    
}

void printMensch(Mensch m) {
    std::cout << m.name << " " << m.alter << "\n";
}

void setName(Mensch m, std::string s) {
    m.name = s;
}
