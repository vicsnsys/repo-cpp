#include <iostream>

void Mais(int* n);
int Incrementa(int n);

int main() {

	int number;
	std::cout << "Digite um valor: ";
	std::cin >> number;

	std::cout << "Resultado apos Mais: ";
	Mais(&number);															// Altera o valor na variável antes de passá-la pra Incrementa
	std::cout << "Resultado apos Incrementa: " << Incrementa(number);


	return 0;
}

void Mais(int* n) {
	*n += 1;							
	std::cout << *n << std::endl;
}

int Incrementa(int n) {
	return ++n;
}