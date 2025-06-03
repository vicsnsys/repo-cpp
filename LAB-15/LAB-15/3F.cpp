#include <iostream>

struct carro {
	char modelo[20];
	unsigned anoFab;
	float preco;
};

std::istream& operator>>(std::istream& is, carro& b);
std::ostream& operator<<(std::ostream& os, carro& b);

int main() {

	carro carros[10];

	std::cin >> carros[0];
	std::cin >> carros[1];

	carro* ptr = &carros[1];

	std::cout << *ptr;

	return 0;
}

std::istream& operator>>(std::istream& is, carro& b) {
	std::cout << "Digite o modelo: ";
	is >> b.modelo;
	std::cout << "Digite o ano de fabricacao: ";
	is >> b.anoFab;
	std::cout << "Digite o preco: ";
	is >> b.preco;
	return is;
}

std::ostream& operator<<(std::ostream& os, carro& b) {
	os << "Modelo: " << b.modelo << "\n";
	os << "Ano de Fabricacao: " << b.anoFab << "\n";
	os << "Preco: " << b.preco << "\n";
	return os;
}