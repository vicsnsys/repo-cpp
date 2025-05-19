#include <iostream>
#include <string>

struct peixe {
	std::string tipo;
	float peso = NULL;
	int comprimento = NULL;
};

void wPointer(peixe* temp);
void woPointer(peixe temp);

int main() {

	peixe p = {};

	p.tipo = "Piaba";
	p.peso = 6.2;
	p.comprimento = 5;

	std::cout << "Sem ponteiro: ";
	woPointer(p);
	std::cout << "\nCom ponteiro: ";
	wPointer(&p);


	return 0;
}

void wPointer(peixe* temp) {
	std::cout << temp->tipo << " com ";
	std::cout << temp->peso << "g e ";
	std::cout << temp->comprimento << "cm";
}

void woPointer(peixe temp) {
	std::cout << temp.tipo << " com ";
	std::cout << temp.peso << "g e ";
	std::cout << temp.comprimento << "cm";
}
