#include <iostream>

int main() {

	float n, frac;
	int dec;

	std::cout << "Digite um numero real: ";
	std::cin >> n;

	dec = n;
	frac = n - dec;

	std::cout << "A parte inteira: " << dec << std::endl;
	std::cout << "A parte fracionaria: " << frac << std::endl;

	return 0;
}