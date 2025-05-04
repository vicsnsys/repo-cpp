#include <iostream>
#include <iomanip>

int main() {

	std::cout << std::fixed << std::setprecision(2);

	float price[3] = { 1.5, 2, 1 };
	float quant[3];


	std::cout << "Prezado cliente,\nDigite a quantidade de quilos desejados:" << std::endl;
	std::cout << "Alface: ";
	std::cin >> quant[0];
	std::cout << "Beterraba: ";
	std::cin >> quant[1];
	std::cout << "Cenoura: ";
	std::cin >> quant[2];

	std::cout << "Resumo da Compra" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "Alface    = R$" << price[0] * quant[0] << std::endl;
	std::cout << "Beterraba = R$" << price[1] * quant[1] << std::endl;
	std::cout << "Cenoura   = R$" << price[2] * quant[2] << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "Total     = R$" << (price[0] * quant[0]) + (price[1] * quant[1]) + (price[2] * quant[2]);
	return 0;
}