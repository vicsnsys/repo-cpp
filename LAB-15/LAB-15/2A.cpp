#include <iostream>

int main() {

	int* n = new int{ 100 };
	std::cout << "Conteudo armazenado: " << *n << std::endl;
	std::cout << "Digite novo valor para esse bloco de memoria: ";
	std::cin >> *n;
	std::cout << "Novo valor armazenado: " << *n << std::endl;

	return 0;
}