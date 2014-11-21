#include <iostream>
#include <string>
#include <stdlib.h>

inline void keepWindowOpen() {
	std::cin.clear();
	std::cout << "\n\tweiter mit beliebiger Taste....";
	std::string tmp;
	std::getline(std::cin, tmp);
}


inline void clearScreen()
{
#if defined(_WIN32) 
	system("cls");
#endif
#if defined(LINUX)
	system("clear");
#endif
}

int main() {
	for (size_t i = 0; i != 5; ++i) {
		std::cout << "\n\n\thhh\n";
		weiter();
		clearScreen();
		std::cout << "\n\n\tjjjj\n";
		weiter();
	}
	
	return 0;
}