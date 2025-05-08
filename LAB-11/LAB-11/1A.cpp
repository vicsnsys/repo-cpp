#include <iostream>

int main() {

	char correctPass[] = "progcomp";
	char buffer[20];

	std::cout << "Digite a senha: ";
	std::cin.getline(buffer, 20);

	if (strcmp(correctPass, buffer) == 0) {
		std::cout << "Senha correta!" << std::endl;
	}
	else {
		std::cout << "Senha invalida!" << std::endl;
	}

	return 0;
}