#include <iostream>
#include <string>

struct peixe {
	std::string tipo;
	float peso = 0;
	int comprimento = 0;
};

std::ostream& operator<<(std::ostream& os, peixe& temp);

int main() {

	peixe p1 = {};
	peixe* ptr = &p1;

	ptr->tipo = "Dourado";
	ptr->peso = 4.5f;
	ptr->comprimento = 60;

	std::cout << p1 << std::endl;

	return 0;
}

std::ostream& operator<<(std::ostream& os, peixe& temp) {
	os << temp.tipo << "\n";
	os << temp.peso << "\n";
	os << temp.comprimento<< "\n";
	return os;
}