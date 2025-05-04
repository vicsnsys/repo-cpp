#include <iostream>

double calcVet(double vet[3]);

int main() {

	double vet[3];

	std::cout << "Entre com o valor para a primeira posicao: ";
	std::cin >> vet[0];
	std::cout << "Entre com o valor para a segunda posicao: ";
	std::cin >> vet[1];
	std::cout << "Entre com o valor para a terceira posicao: ";
	std::cin >> vet[2];

	std::cout << calcVet(vet);

	return 0;
}

double calcVet(double vet[3]) {
	return (vet[0] * vet[2]) - vet[1];
}