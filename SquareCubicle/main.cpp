//Tehd��n muutos jotta saadaan kokeiltua puskemista gittiin. 


#include <iostream>
#include <cstdlib>
#include "compute.h"
int main(int argc, char* argv[]) {
	

	if (argc < 2) {
		std::cout << "Usage: square number (where number is integer)" << std::endl;
		return 1;
	}
	int n = atoi(argv[1]);
	if (n == 0) {
		std::cout << "Number must be non-zero" << std::endl;
		return 1;
	}
	int result = square(n);
	std::cout << result << std::endl;

	result = cube(n);
	std::cout << result << std::endl;
	//Lis�tty uusi mahtava funktion cube Kutsu. 
	return 0;
}