// finde die Fehler und bringe das Programm zum Laufen
//
#include <iostream>

const double PI = 3.14159;

double returnsCircumference(double radius){
    return 2 * PI * radius;
}

int main(){
    std::cout << "Bitte geben Sie den Radius in m ein: ";
    double r = 0.0;
    std::cin >> r;
    std::cout << "Der Umfang des Kreises mit dem Radius " << r 
              << " betraegt " << returnsCircumference(r) << " m.\n";
    std::cout << "Danke das Sie dieses Programm verwendet haben.\n";
    return 0;
}

