#include <iostream>

struct horario {
	unsigned int horas;
	unsigned int minutos;
};

void showTime(horario* temp);

int main() {

	horario h = {};
	horario* ptr = &h;

	std::cout << "Que horas sao? ";
	std::cin >> h.horas;
	std::cin.ignore();
	std::cin >> h.minutos;

	std::cout << "Seu relogio esta atrasado, o horario correto eh ";
	ptr->horas += 1;
	showTime(&h);

	return 0;
}

void showTime(horario* temp) {
	std::cout << temp->horas << ":" << temp->minutos << std::endl;
}