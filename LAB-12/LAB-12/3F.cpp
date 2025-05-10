#include <iostream>


struct data {
	int day;
	int month;
	int year;
};

std::istream& operator>>(std::istream& is, data& d);
std::ostream& operator<<(std::ostream& os, data& d);

unsigned int operator-(data today, data birth);

int main() {

	data birth;
	data today;
	std::cout << "Data de Nascimento: ";
	std::cin >> birth;
	std::cout << "Data de Hoje: ";
	std::cin >> today;
	
	std::cout << "Voce tem " << today - birth << " dias de vida.";

	return 0;
}

std::istream& operator>>(std::istream& is, data& d) {
	std::cin >> d.day;
	std::cin.ignore();
	std::cin >> d.month;
	std::cin.ignore();
	std::cin >> d.year;
	return is;
}


std::ostream& operator<<(std::ostream& os, data& d) {
	os << d.day;
	os << "/";
	os << d.month;
	os << "/";
	os << d.year;
	return os;
}

unsigned int operator-(data today, data birth) {
	unsigned int daysToday = today.year * 365 + today.month * 31 + today.day;
	unsigned int daysBirth = birth.year * 365 + birth.month * 31 + birth.day;
	return daysToday - daysBirth;
}