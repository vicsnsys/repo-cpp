#include <iostream>
#include <string>

int main() {

	constexpr unsigned char qtd = 5;
	char nome[qtd] = {};
	char sobrenome[qtd] = {};
	char apelido[3] = {'A', 'A'};

	std::cout << "Primeiro nome? ";
	std::cin.getline(nome, qtd);
	std::cout << "Segundo nome? ";
	std::cin.getline(sobrenome, qtd);

	apelido[0] = nome[0];
	apelido[1] = sobrenome[0];

	std::cout << "Bom dia, " << nome << " " << sobrenome << "." << std::endl;
	std::cout << "Seja bem vindo " << apelido << std::endl;

	
/*  std::string nome;
	std::string sobrenome;

	std::cout << "Primeiro nome?: ";
	std::cin >> nome;
	std::cout << "Segundo nome?: ";
	std::cin >> sobrenome;

	std::cout << "Bom dia, " << nome << " " << sobrenome << std::endl;
	std::cout << "Seja bem vindo " << nome.at(0) << sobrenome.at(0);
*/


	return 0;
}