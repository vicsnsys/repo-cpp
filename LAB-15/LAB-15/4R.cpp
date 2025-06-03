#include <iostream>

struct peixe {
	char tipo[20];
	float peso;
	unsigned int comp;
};

void showWeigth(peixe* p);

int main() {

	unsigned int tam = 0;

	std::cout << "Tamanho do vetor: ";
	std::cin >> tam;

	peixe* p = new peixe[tam];

	p[0].peso = 6.7;

	showWeigth(p);

	delete[] p;

	return 0;
}

void showWeigth(peixe* p) {
	std::cout << p[0].peso;
}