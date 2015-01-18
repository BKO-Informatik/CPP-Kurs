#include <iostream>
#include <string>
#include <stdlib.h>

inline void halteFensterAuf() {
	std::cin.clear();
	std::cout << "\n\tweiter mit beliebiger Taste....";
	std::string tmp;
	std::getline(std::cin, tmp);
}


inline void loescheFenster()
{
#if defined(_WIN32)
	system("cls");
#endif
#if defined(__linux__) || defined(__unix__) 
    system("clear");
#endif
}

int main() {
	for(size_t i = 0; i != 5; ++i) {
		std::cout << "\n\n\thhh\n";
		halteFensterAuf();
		loescheFenster();
        std::cout << "\n\n\tjjjj\n";
        halteFensterAuf();
	}
	return 0;
}
