#include <iostream>

int main() {

	unsigned int tam = 0;

	std::cout << "Digite o tamanho do vetor: ";
	std::cin >> tam;

	std::cout << "Criando vetor para " << tam << " inteiros..." << std::endl;
	int* vet = new int[tam];

	return 0;
}