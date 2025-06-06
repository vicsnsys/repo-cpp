#include <iostream>

int main() {
	int tam;
	std::cout << "Quantos valores deseja guardar? ";
	std::cin >> tam;

	if (tam <= 0) return 0;

	int* vet = new int[tam];

	std::cout << "Quais os valores? ";
	for (int i = 0; i < tam; i++) {
		std::cin >> vet[i];
	}

	std::cout << "Os valores ";

	for (int i = 0; i < tam; i++) {
		if (i > 0) {
			if (i == tam - 1)
				std::cout << " e ";
			else
				std::cout << ", ";
		}
		std::cout << vet[i];
	}

	std::cout << " foram armazenados.\n";

	delete[] vet;
	return 0;
}
