#include <iostream>

int main() {

	/*
	Criei um ponteiro que aponta pra um double e recebe o endere�o de litros
	e logo ap�s mostro o valor que esse endere�o apontado armazena
	*/

	double litros = 3.4;
	double* ptr = &litros;
	std::cout << *ptr;

}