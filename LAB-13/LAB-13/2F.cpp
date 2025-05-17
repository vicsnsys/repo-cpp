#include <iostream>

enum mes {Jan=1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez};

std::istream& operator>>(std::istream& is, mes& temp);
std::ostream& operator<<(std::ostream& os, mes& temp);

int main() {

	mes inicio, fim;
	
	std::cout << "[1] - [12] Meses" << std::endl;
	std::cout << "-------------------------------" << std::endl;

	std::cout << "Digite o mes de inicio: ";
	std::cin >> inicio;
	std::cout << "Digite o mes do fim do semestre: ";
	std::cin >> fim;

	mes atual;
	std::cout << "Digite o mes atual: ";
	std::cin >> atual;

	if (atual >= inicio && atual <= fim) {
		std::cout << "Voce esta em periodo de aulas" << std::endl;
	}
	else {
		std::cout << "Ferias!" << std::endl;
	}


	return 0;
}

std::istream& operator>>(std::istream& is, mes& temp) {
	int pos;
	is >> pos;
	temp = (mes)pos;
	return is;
}

std::ostream& operator<<(std::ostream& os, mes& temp) {
	os << temp;
	return os;
}