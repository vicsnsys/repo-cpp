#include <iostream>
#include <string>

char lastChar(std::string str);

int main() {

	std::string nome;
	std::cout << "Digite uma palavra: ";
	std::getline(std::cin, nome);

	std::cout << "Em " << nome  << " a ultima letra eh " << lastChar(nome);

	return 0;
}

char lastChar(std::string str) {
	return str.back();
}