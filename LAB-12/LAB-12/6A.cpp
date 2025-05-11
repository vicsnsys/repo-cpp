#include <iostream>

struct horary {
	unsigned short hour;
	unsigned short minute;
};

std::istream& operator>>(std::istream& is, horary& temp);
std::ostream& operator<<(std::ostream& os, horary& temp);
short calcMin(horary a, horary b);
	
int main() {

	horary inicio;
	horary fim;

	std::cout << "Inicio: ";
	std::cin >> inicio;
	std::cout << "Fim: ";
	std::cin >> fim;

	short min = calcMin(inicio, fim);

	if (min < 0) {
		std::cout << "Erro ao calcular a diferenca dos horarios!";
		return 1;
	}

	unsigned short hora = min / 60;
	unsigned short minutos = min % 60;
	std::cout << "Entre " 
		<< inicio 
		<< " e " 
		<< fim 
		<< " existem " 
		<< min 
		<< " minutos, isto eh, " 
		<< hora 
		<< "h " 
		<< minutos 
		<< " minutos" 
		<< std::endl;

	return 0;
}

std::istream& operator>>(std::istream& is, horary& temp) {
	is >> temp.hour;
	is.ignore();
	is >> temp.minute;
	return is;
}

std::ostream& operator<<(std::ostream& os, horary& temp) {
	os << temp.hour << ":" << temp.minute;
	return os;
}

short calcMin(horary a, horary b) {
	if (a.minute > 59 || b.minute > 59 || a.hour > 23 || b.hour > 23) {
		std::cout << "Hora ou minuto inválido.\n";
		return -1;
	}

	short totalInicio = a.hour * 60 + a.minute;
	short totalFim = b.hour * 60 + b.minute;
	

	return totalFim - totalInicio;
}