#include <iostream>

int main() {

	double x1, x2;

	std::cout << "Digite o valor x1: ";
	std::cin >> x1;
	std::cout << "Digite o valor x2: ";
	std::cin >> x2;

	int num = int(x1) + int(x2);

	std::cout << "A adicao inteira dos valores eh " << num << std::endl;

	return 0;
}