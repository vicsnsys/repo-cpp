#include <iostream>

int main() {

	int vet[5] = { 10, 30, 20, 40, 50 };
	short pos;
	short newNum;

	std::cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << " "  << vet[4] << std::endl;
	std::cout << "---------------------" << std::endl;

	std::cout << "Alterar posicao: ";
	std::cin >> pos;
	std::cout << "Novo Valor: ";
	std::cin >> newNum;
	vet[pos] = newNum;
	std::cout << "---------------------" << std::endl;
	std::cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << " " << vet[4] << std::endl;
	return 0;
}