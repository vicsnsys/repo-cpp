#include <iostream>


struct date {
	unsigned short day;
	unsigned short month;
	unsigned short year;
};

struct horary {
	unsigned short hour;
	unsigned short minute;
	unsigned short second;
};

struct event {
	date day;
	horary time;
};

std::istream& operator>>(std::istream& is, date& temp);
std::istream& operator>>(std::istream& is, horary& temp);
std::ostream& operator<<(std::ostream& os, date& temp);
std::ostream& operator<<(std::ostream& os, horary& temp);

int main() {

	event evento;
	std::cout << "Entre com o dia do evento: ";
	std::cin >> evento.day;
	std::cout << "Entre com o horario do evento: ";
	std::cin >> evento.time;

	std::cout << "Dia: ";
	std::cout << evento.day << std::endl;
	std::cout << "Hora: ";
	std::cout << evento.time << std::endl;

	return 0;
}

std::istream& operator>>(std::istream& is, date& temp) {
	is >> temp.day;
	is.ignore();
	is >> temp.month;
	is.ignore();
	is >> temp.year;
	return is;
}

std::istream& operator>>(std::istream& is, horary& temp) {
	is >> temp.hour;
	is.ignore();
	is >> temp.minute;
	is.ignore();
	is >> temp.second;
	return is;
}

std::ostream& operator<<(std::ostream& os, date& temp) {
	os << temp.day << "/" << temp.month << "/" << temp.year;
	return os;
}

std::ostream& operator<<(std::ostream& os, horary& temp) {
	os << temp.hour << ":" << temp.minute << ":" << temp.second;
	return os;
}