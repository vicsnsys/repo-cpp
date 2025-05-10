#include <iostream>

struct palavra {
	char portugues[10];
	char ingles[10];
	char espanhol[10];
};

std::ostream& operator<<(std::ostream& os, palavra& temp);
std::istream& operator>>(std::istream& is, palavra& temp);

int main() {

	palavra dicionario[10]{
		{"Bola", "Ball" ,"Pelota"},
		{"Garrafa", "Bottle", "Botella"}
	};

	std::cin >> dicionario[2];

	std::cout << "[1] Palavra do Dicionario: " << std::endl;
	std::cout << dicionario[0];
	std::cout << "[2] Palavra do Dicionario: " << std::endl;
	std::cout << dicionario[1];
	std::cout << "[3] Palavra do Dicionario: " << std::endl;
	std::cout << dicionario[2];

	return 0;
}

std::istream& operator>>(std::istream& is, palavra& temp) {
	std::cout << "Digite a palavra em Portugues: ";
	is >> temp.portugues;
	std::cout << "Digite a palavra em Ingles:    ";
	is >> temp.ingles;
	std::cout << "Digite a palavra em Espanhol:  ";
	is >> temp.espanhol;
	return is;
}

std::ostream& operator<<(std::ostream& os, palavra& temp) {
	os << "Portugues: " << temp.portugues << std::endl;
	os << "Ingles:    " << temp.ingles << std::endl;
	os << "Espanhol:  " << temp.espanhol << std::endl << std::endl;
	return os;
}

