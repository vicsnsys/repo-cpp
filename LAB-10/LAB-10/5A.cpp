#include <iostream>

int main() {

	double v = 245.795;
	int vi = (int)v;

	v *= 100;
	vi *= 100;

	std::cout << v << std::endl;
	std::cout << vi << std::endl;

	// Retorna 24500 porque ocorreu o truncamento na atribuicao no valor inteiro (ou seja, na atribuicao, ele vale 245 somente)
	// e ao multiplicar, multiplica esse valor truncado, e nao o valor exato em real

	return 0;
}