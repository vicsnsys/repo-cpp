#include <iostream>
#include <iomanip>

// Tratei o codigo direto na função main, não usei muitas sobrecargas pros meus tipos.

struct data {
	unsigned int dia;
	unsigned int mes;
	unsigned int ano;
};

struct horario {
	unsigned int hora;
	unsigned int minuto;
};

struct desc {
	char descricao[18];
};

struct evento {
	data dia;
	horario hora;
	desc desc;
};

std::istream& operator>>(std::istream& is, data& temp);
std::istream& operator>>(std::istream& is, horario& temp);
std::ostream& operator<<(std::ostream& os, data& temp);
std::ostream& operator<<(std::ostream& os, horario& temp);


int main() {

	evento evento[5] = {};
		
	int qtd = 1;
	std::cout << "Entre com 2 eventos:" << std::endl;
	for (int i = 0; i < 2; ++i) {
		std::cout << "#" << qtd << std::endl;
		std::cout << "Data: ";
		std::cin >> evento[i].dia;
		std::cout << "Hora: ";
		std::cin >> evento[i].hora;
		std::cout << "Desc: ";
		std::cin.ignore();
		std::cin.getline(evento[i].desc.descricao, 18);
		qtd++;
	}

	std::cout << "--------------------" << std::endl;
	std::cout << "Eventos Cadastrados" << std::endl;

	for (int i = 0; i < 2; i++) {
		std::cout << evento[i].dia;
		std::cout << " " << evento[i].hora;
		std::cout << " " << evento[i].desc.descricao << std::endl;;
	}

	return 0;
}

std::istream& operator>>(std::istream& is, data& temp) {
	is >> temp.dia;
	is >> temp.mes;
	is >> temp.ano;
	return is;
}

std::istream& operator>>(std::istream& is, horario& temp) {
	is >> temp.hora;
	is >> temp.minuto;
	return is;
}

std::ostream& operator<< (std::ostream & os, data& temp) {
	os << temp.dia;
	os << "/";
	os << temp.mes;
	os << "/";
	os << temp.ano;
	return os;
}

std::ostream& operator<<(std::ostream& os, horario& temp) {
	os << std::setfill('0') << std::setw(2) << temp.hora << ":" << std::setfill('0') << std::setw(2) << temp.minuto;
	return os;
}
