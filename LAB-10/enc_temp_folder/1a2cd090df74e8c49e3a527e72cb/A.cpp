#include <iostream>

int main() {

	int vet[1] = { 60 };

	for (int i = 0; i < 5000; i++) {
		std::cout << "INDEX: " << i << std::endl;
		vet[i] += 1;
	}

	return 0;
}