#include <iostream>

int main() {

	int vetA[5] = {10, 20, 30, 40, 50};
	int vetB[5] = {10, 20, 0};
	int vetC[5] = { 0, 0, 30, 0};

	std::cout << "Vetor A: ";
	for (int i = 0; i < 5; i++) {
		std::cout << vetA[i] << " ";
	}

	std::cout << "\nVetor B: ";
	for (int i = 0; i < 5; i++) {
		std::cout << vetB[i] << " ";
	}

	std::cout << "\nVetor C: ";
	for (int i = 0; i < 5; i++) {
		std::cout << vetC[i] << " ";
	}

	return 0;
}