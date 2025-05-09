#include <iostream>

struct complexo {
	float real;
	float img;
};

std::istream& operator>>(std::istream& is, complexo& temp);
std::ostream& operator<<(std::ostream& os, complexo& temp);
complexo operator+(complexo a, complexo b);
complexo operator*(complexo a, complexo b);

int main() {

	complexo a;
	complexo b;
	std::cout << "Primeiro complexo: ";
	std::cin >> a;
	std::cout << "Segundo complexo: ";
	std::cin >> b;
	std::cout << "A soma dos numeros: ";
	complexo sum = a + b;
	std::cout << sum;
	std::cout << "A multiplicacao dos numeros: ";
	complexo mul = a * b;
	std::cout << mul;

	return 0;
}

std::istream& operator>>(std::istream& is, complexo& temp) {
	std::cin >> temp.real;
	std::cin >> temp.img;
	std::cin.ignore();
	return is;
}

std::ostream& operator<<(std::ostream& os, complexo& temp) {
	os << temp.real;
	os << std::showpos;
	os << temp.img;
	os << std::noshowpos;
	os << "i" << std::endl;
	return os;
}

complexo operator+(complexo a, complexo b) {
	complexo c;
	c.real = a.real + b.real;
	c.img = a.img + b.img;
	return c;
}

complexo operator*(complexo a, complexo b) {
	complexo temp;
	temp.real = (a.real * b.real - a.img * b.img);
	temp.img =  (a.img * b.real + a.real * b.img);
	return temp;
}