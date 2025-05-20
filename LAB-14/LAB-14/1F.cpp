#include <iostream>

int main() {

	/*
	
	'q' é um ponteiro pra ponteiros, ele aponta pra p que aponta pra x.
	 e pra acessar x usa ** (referente à quantidade de ponteiros)
	
	*/

	int x, * p, ** q;
	p = &x;
	q = &p;
	
	x = 10;

	std::cout << **q << std::endl;

	return 0;
}