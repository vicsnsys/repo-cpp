#include <iostream>

int main() {

	char dc1[20] = {};
	char dc2[20] = {};
	char dc3[20] = {};
	char frase[60] = {};
	char palavra[] = "Natal";

	std::cout << "Quais suas datas comemorativas preferidas?" << std::endl;
	std::cin.getline(dc1, 20);
	std::cin.getline(dc2, 20);
	std::cin.getline(dc3, 20);

	strcpy_s(frase, dc1);
	strcat_s(frase, ", ");
	strcat_s(frase, dc2);
	strcat_s(frase, " e ");
	strcat_s(frase, dc3);
	strcat_s(frase, " sao belas festas!");

	if ( strcmp(palavra, dc1) == 0 || strcmp(palavra, dc2) == 0 || strcmp(palavra, dc3) == 0) {
		std::cout << "O Natal tambem eh uma das minhas datas preferidas!" << std::endl;
	}

	return 0;
}