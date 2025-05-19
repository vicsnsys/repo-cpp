#include <iostream>

int main() {

	float torque[10] = { 2.5f, 8.1f, 3.4f, 9.2f, 5.7f, 9.6f, 6.3f, 8.0f, 5.4f, 4.9f };

	float* ptr = torque;
	std::cout << "Primeiro: " << *ptr << std::endl;
	ptr = &torque[9];
	std::cout << "Ultimo: " << *ptr << std::endl;

	/*
	Outro jeito de fazer:

	-> std::cout << "Ultimo: " << *(ptr + 9) << std::endl;
	
	*/


	return 0;
}