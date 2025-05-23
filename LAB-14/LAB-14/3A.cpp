#include <iostream>

int main() {

	int valor = 10, * temp, soma = 0;
	temp = &valor;
	*temp = 20;
	temp = &soma;
	*temp = valor;
	std::cout << "valor: " << valor << "\nsoma: " << soma << std::endl;

	return 0;
}