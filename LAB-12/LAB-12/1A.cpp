#include <iostream>
#include <cmath>

struct contaBancaria {
	unsigned int id;
	char nome[30];
	int saldo;
};

std::istream& operator>>(std::istream& is, contaBancaria& temp);
std::ostream& operator<<(std::ostream& os, contaBancaria& temp);

int main() {

	contaBancaria cl1;
	unsigned int deposito;
	std::cin >> cl1;
	std::cout << cl1;

	std::cout << "Quanto deseja depositar?: ";
	std::cin >> deposito;
	cl1.saldo = deposito;

	std::cout << cl1;

	return 0;
}

std::istream& operator>>(std::istream& is, contaBancaria& temp) {
	temp.id = 1;
	std::cout << "Digite seu nome: ";
	temp.saldo = 0;
	is >> temp.nome;
	return is;
}

std::ostream& operator<<(std::ostream& os, contaBancaria& temp) {
	os << "Identificador:  " << temp.id << std::endl;
	os << "Nome:           " << temp.nome << std::endl;
	os << "Saldo:          " << temp.saldo << std::endl << std::endl;
	return os;
}

