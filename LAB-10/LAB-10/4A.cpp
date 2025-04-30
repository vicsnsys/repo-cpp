#include <iostream>

int main() {

	int m;

	std::cout << "Entre com a distancia em metros: ";
	std::cin >> m;

	int km = m / 1000;
	int metros = m % 1000;
	std::cout << m << " metros equivalem a " << km << " quilometros e " << metros << " metros";

	return 0;
}