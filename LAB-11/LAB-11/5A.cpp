#include <iostream>

int main() {

	char fName[10];
	char sName[10];

	std::cout << "Digite seu nome e sobrenome: ";
	std::cin >> fName >> sName;

	std::cout << "Bom dia, senhor " << sName << ". Ou devo chama-lo de " << fName << "?";
	return 0;
}