#include <iostream>

int main() {

	float weight[3] = { 2, 3, 4 };
	float grades[3];
	 

	std::cout << "Digite sua primeira nota: ";
	std::cin >> grades[0];
	std::cout << "Digite sua segunda nota: ";
	std::cin >> grades[1];
	std::cout << "Digite sua terceira nota: ";
	std::cin >> grades[2];
	
	float oldAverage = ((grades[0] * weight[0]) + (grades[1] * weight[1]) + (grades[2] * weight[2])) / 9;
	float newAverage = (grades[0] + grades[1] + grades[2]) / 3;

	std::cout << "Sistema Antigo\n--------------\n";
	std::cout << "Media: " << oldAverage << std::endl;
	std::cout << "Sistema Novo\n--------------\n";
	std::cout << "Media: " << newAverage << std::endl;
	return 0;
}