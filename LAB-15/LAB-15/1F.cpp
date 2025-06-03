#include <iostream>

int main() {

	unsigned tam = 0;
	std::cout << "Digite o numero de alunos (minimo 2): ";
	std::cin >> tam;

	if (tam >= 2) {
		float* notas = new float[tam];
		std::cout << "Digite a nota de dois alunos: ";
		std::cin >> notas[0] >> notas[1];
		std::cout << "As notas digitadas foram " << notas[0] << " e " << notas[1];
	}
	else {
		std::cout << "Invalido.";
	}

	return 0;
}