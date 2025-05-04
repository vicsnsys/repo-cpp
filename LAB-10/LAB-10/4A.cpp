#include <iostream>

int main() {

	int vet[1] = { 60 };

	for (int i = 0; i < 5000; i++) {
		std::cout << "INDEX: " << i << std::endl;
		vet[i] += 1;
	}

	return 0;
}

// Testando isso, vi que nem sempre a posicao que o sistema,
// na verdade, o compilador do Visual Studio 2022 intervem, é a mesma.
// Creio que podemos deduzir que é um comportamento volátil do compilador.

// É um tema interessante.