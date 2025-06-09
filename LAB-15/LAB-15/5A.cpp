#include <iostream>

struct ASCII {
	char caractere;
	int associado;
};

ASCII* retEnd(int ass, char ch);

int main() {

	int ass;
	char ch;
	std::cout << "Int associado: ";
	std::cin >> ass;
	std::cout << "Caractere: ";
	std::cin >> ch;

	ASCII* ascii = retEnd(ass, ch);
	std::cout << "Inteiro associado: " << ascii->associado << std::endl;
	std::cout << "Caractere associado: " << ascii->caractere << std::endl;
	delete ascii;

	return 0;
}

ASCII* retEnd(int ass, char ch) {
	ASCII* temp = new ASCII;
	temp->associado = ass;
	temp->caractere = ch;
	return temp;
}