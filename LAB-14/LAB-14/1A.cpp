#include <iostream>
#include <string>

struct tigela {
	std::string alimento;
	bool is_full;
};

void fome(tigela* temp);

int main() {

	tigela t1 = {};
	t1.alimento = "sopa";
	t1.is_full = true;

	tigela* ptr = &t1;

	std::cout << ptr->alimento << std::endl;
	if (ptr->is_full) {
		std::cout << "cheia" << std::endl << std::endl;
	}

	fome(ptr);

	std::cout << ptr->alimento << std::endl;
	if(!ptr->is_full) {
		std::cout << "vazia" << std::endl;
	}

	return 0;
}

void fome(tigela* temp) {
	temp->is_full = false;
}