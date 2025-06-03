#include <iostream>

struct balao {
	float diametro;
	char marca[20];
	int modelo;
};

std::ostream& operator<<(std::ostream& os, balao* b);

int main() {

	balao* b = new balao;
	std::cout << "Digite o diametro do balao: ";
	std::cin >> b->diametro;
	std::cout << "Digite a marca do balao: ";
	std::cin >> b->marca;
	std::cout << "Digite o numero do modelo: ";
	std::cin >> b->modelo;

	std::cout << b;

	return 0;
}

std::ostream& operator<<(std::ostream& os, balao* b) {
	os << "Diametro: " << b->diametro << "\n";
	os << "Marca: " << b->marca << "\n";
	os << "Modelo: " << b->modelo << "\n";
	return os;
}