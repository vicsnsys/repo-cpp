#include <iostream>
#include <string>

int main() {

	char conceito;
	char nome[20] = {};
	
	/*	std::string nome;

	std::cout << "Qual eh o nome?: ";
	std::getline(std::cin, nome);
*/

	std::cout << "Qual eh o nome?: ";
	std::cin.getline(nome, 20);

	std::cout << "Que conceito voce merece? ";
	std::cin >> conceito;

	if (conceito < 65) {
		std::cout << "Invalido!" << std::endl;
	}
	else {
		++conceito;
	}

	std::cout << "Bom dia, " << nome << ". Seu conceito eh " << conceito << std::endl;

	return 0;
}