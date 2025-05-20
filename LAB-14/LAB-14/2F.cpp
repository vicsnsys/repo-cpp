#include <iostream>

int main() {

	char ch = 'A';
	char* ptr = &ch;
	*ptr = 'B';

	std::cout << ch << std::endl;
	std::cout << *ptr << std::endl;

	return 0;
}