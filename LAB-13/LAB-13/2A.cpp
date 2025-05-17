#include <iostream>

union jogador {
	char nome[25];
	int numero;
};

struct gol {
	jogador jog;
	int hora, min;
	bool is_age;
};

int main() {

	int opc;
	gol list[3] = {};

	for (int i = 0; i < 3; i++){
		system("cls");
		std::cout << "[0] - Ler o nome do Jogador\n[1] - Ler o numero do jogador" << std::endl;
		std::cout << "Indice " << i << ": " << std::endl;
		std::cout << "Digite: ";
		std::cin >> opc;
		if (opc == 0) {
			list[i].is_age = false;
		}
		else if (opc == 1) {
			list[i].is_age = true;
		}
		else {
			std::cout << "Opcao invalida.";
		}
		system("cls");
	}

	std::cout << "Digite os dados dos ultimos 3 gols: " << std::endl;
	
	for (int i = 0; i < 3; i++) {
		if (list[i].is_age == false) {
			std::cout << "Gol (com nome): ";
			std::cin >> list[i].jog.nome >> list[i].hora;
			std::cin.ignore();
			std::cin >> list[i].min;
		}
		else if (list[i].is_age == true) {
			std::cout << "Gol (com numero): ";
			std::cin >> list[i].jog.numero >> list[i].hora;
			std::cin.ignore();
			std::cin >> list[i].min;
		}
	}

	for (int i = 0; i < 3; i++) {
		if (list[i].is_age == false) {
			std::cout << list[i].jog.nome << " " << list[i].hora << "h" << list[i].min << std::endl;
		}
		else if (list[i].is_age == true) {
			std::cout << list[i].jog.numero << " " << list[i].hora << "h" << list[i].min << std::endl;
		}
	}

	return 0;
}
