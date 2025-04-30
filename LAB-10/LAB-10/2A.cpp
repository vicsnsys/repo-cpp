#include <iostream>

int main() {

	int x, y;

	std::cout << "Digite dois numeros inteiros: ";
	std::cin >> x >> y;

	int quo = x / y;

	std::cout << "O quociente " << x << "/" << y << " eh " << quo << std::endl;
	std::cout << "O resto da divisao " << x << "%" << y << " eh " << x % y << std::endl;

	return 0;
}