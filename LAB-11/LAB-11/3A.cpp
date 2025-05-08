#include <iostream>

int main() {

	char nome[20];
	char data[11];
	std::cout << "Nome: ";
	std::cin.getline(nome, 20);
	std::cout << "Data: ";
	std::cin.getline(data, 20);

	char frase[80];
	strcpy_s(frase, nome);
	strcat_s(frase, " esteve aqui em ");
	strcat_s(frase, data);

	std::cout << frase << std::endl;

	return 0;
}