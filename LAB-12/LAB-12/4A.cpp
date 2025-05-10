#include <iostream>

struct livro {
	char nome[30];
	unsigned short ano;
	char isbn[14];
};

struct jogo {
	char nome[20];
	char plataforma[10];
	unsigned short ano;
};

std::ostream& operator<<(std::ostream& os, livro temp);
std::ostream& operator<<(std::ostream& os, jogo temp);

int main() {

	livro lEmp[10] = {};
	jogo jEmp[10] = {};
	unsigned short opc;

	std::cout << "[1] - Emprestar Livro" << std::endl;
	std::cout << "[2] - Emprestar Jogo" << std::endl;
	std::cout << "[0] - Sair" << std::endl;
	std::cout << "Digite: ";
	std::cin >> opc;
	if (opc > 2) {
		std::cout << "Valor invalido!" << std::endl;
	}
	else if (opc == 0) {
		std::cout << "Saindo do programa..." << std::endl;
	}
	else {
		// Ignore -> Ignore the \0 in the Buffer
		std::cin.ignore();
		if (opc == 1) {
			std::cout << "Digite o nome do Livro: ";
			std::cin.getline(lEmp[0].nome, 30);
			std::cout << "Digite o ano do Livro: ";
			std::cin >> lEmp[0].ano;
			std::cout << "Digite o ISBN do Livro: ";
			std::cin >> lEmp[0].isbn;
		}
		else if (opc == 2) {
			std::cout << "Digite o nome do Jogo: ";
			std::cin.getline(jEmp[0].nome, 20);
			std::cout << "Digite a plataforma do Jogo: ";
			std::cin >> jEmp[0].plataforma;
			std::cout << "Digite o ano do Jogo: ";
			std::cin >> jEmp[0].ano;
		}
	}

	if (opc == 1) {
		std::cout << "Livro: " << std::endl;
		std::cout << lEmp[0];
	}
	else if (opc == 2) {
		std::cout << "Jogo: " << std::endl;
		std::cout << jEmp[0];
	}

	return 0;
}

std::ostream& operator<<(std::ostream& os, livro temp) {
	os << "Nome: " << temp.nome << std::endl;
	os << "Ano:  " << temp.ano << std::endl;
	os << "ISBN: " << temp.isbn << std::endl;
	return os;
}

std::ostream& operator<<(std::ostream& os, jogo temp) {
	os << "Nome: " << temp.nome << std::endl;
	os << "Plat: " << temp.plataforma << std::endl;
	os << "Ano:  " << temp.ano << std::endl;
	return os;
}
