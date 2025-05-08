#include <iostream>
#include <stdlib.h>

int main() {

	char firstNum[2];
	unsigned short secondNum = 0;

	std::cout << "Entre com dois numeros: ";
	std::cin >> firstNum >> secondNum;

	std::cout << atoi(firstNum) * secondNum;

	return 0;
}

