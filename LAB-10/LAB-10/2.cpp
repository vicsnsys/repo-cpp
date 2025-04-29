#include <iostream>
#include <iomanip>

int main() {

	float n1 = 0;
	std::cout << "Digite um ponto-flutuante: ";
	std::cin >> n1;

	
	std::cout << "Notacao padrao: ";
	std::cout << std::fixed << std::setprecision(0) << n1 << std::endl;
	std::cout << std::setprecision(6);
	std::cout << std::scientific;
	std::cout << "Notacao cientifica: " << n1 << std::endl;
	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << "Notacao decimal: " << n1;

	return 0;
}