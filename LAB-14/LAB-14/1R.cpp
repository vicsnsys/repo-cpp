#include <iostream>

int main() {

	/*
	Criei um ponteiro que aponta pra um double e recebe o endereço de litros
	e logo após mostro o valor que esse endereço apontado armazena
	*/

	double litros = 3.4;
	double* ptr = &litros;
	std::cout << *ptr;

}