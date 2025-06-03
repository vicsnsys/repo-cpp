#include <iostream>

struct carro {
	char modelo[20];
	unsigned anoFab;
	float preco;
};

void sumPrice(carro* c);
std::istream& operator>>(std::istream& is, carro& b);
std::ostream& operator<<(std::ostream& os, carro& b);

int main() {

	int tam = 0;
	std::cout << "Tamanho do vetor: ";
	std::cin >> tam;

	if (tam >= 2) {
		carro* vCar = new carro[tam];
		std::cin >> vCar[0];
		system("cls");
		std::cin >> vCar[1];
		system("cls");
		sumPrice(vCar);
	}
	else {
		std::cout << "Invalido." << std::endl;
	}

	return 0;
}

void sumPrice(carro* c) {
	std::cout << "O valor total eh R$" << c[0].preco + c[1].preco;
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