#include <iostream>

int sumVet(int vet[5]);

int main() {

	int vet[5];

	std::cout << "Digite 5 valores: ";
	std::cin >> vet[0] >> vet[1] >> vet[2] >> vet[3] >> vet[4];

	std::cout << sumVet(vet);

	return 0;
}

int sumVet(int vet[5]) {
	return vet[0] + vet[1] + vet[2] + vet[3] + vet[4];
}