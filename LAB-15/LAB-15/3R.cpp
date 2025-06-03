#include <iostream>

struct peixe {
	char tipo[20];
	float peso;
	unsigned int comp;
};

int main() {

	unsigned int tam = 0;

	std::cout << "Tamanho do vetor: ";
	std::cin >> tam;

	peixe* p = new peixe[tam];
	
	std::cout << "\nTipo: ";
	std::cin >> p[2].tipo;
	std::cout << "Peso: ";
	std::cin >> p[2].peso;
	std::cout << "Comprimento: ";
	std::cin >> p[2].comp;

	std::cout << "O peso do peixe eh " << p[2].peso << " gramas";

	return 0;
}
