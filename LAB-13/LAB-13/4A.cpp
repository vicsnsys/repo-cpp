#include <iostream> 

enum semana { DOM, SEG, TER, QUA, QUI, SEX, SAB };

int main() {
	char semanas[7][10] = {
		"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"
	};
	for (semana ind = DOM; ind <= SAB; ind = semana(ind + 1))
		std::cout << semanas[ind] << std::endl;
	return 0;
}