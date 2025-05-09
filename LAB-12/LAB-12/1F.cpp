#include <iostream>
#include <iomanip>

struct chocolate {
	char marca[20];
	float peso;
	int caloria;
};

void exibir(chocolate temp);

int main() {

	/*chocolate lanche = {
		"Charge", 2.3, 350
	};

	exibir(lanche);
	*/

	chocolate lanches[3] = {
		{"AAAAA", 30, 200},
		{"BBBBB", 40, 300},
		{"CCCCC", 50, 400}
	};

	exibir(lanches[0]);
	exibir(lanches[1]);
	exibir(lanches[2]);

	return 0;
}

void exibir(chocolate temp) {
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "Marca:    " << temp.marca << std::endl;
	std::cout << "Peso:     " << temp.peso << std::endl;
	std::cout << "Calorias: " << temp.caloria << std::endl << std::endl;
}