#include <iostream>
#include <cstdint>

union color {
	struct {
		std::uint8_t r, g, b, a;
	};
	std::uint32_t dec;
};

void getRGBA(color* cor);
void getInt(color* cor);
void showColor(color* cor, bool is_rgba);

int main() {


	color cor = {};
	bool is_rgba;
	std::cout << "[0] - INT \n[1] - RGBA \nDigite: ";

	std::cin >> is_rgba;

	if (is_rgba) {
		system("cls");
		std::cout << "RGBA:  ";
		getRGBA(&cor);
	}
	else if (!is_rgba) {
		system("cls");
		std::cout << "INT32: ";
		getInt(&cor);
	}

	system("cls");

	showColor(&cor, is_rgba);

	return 0;
}

void getRGBA(color* cor) {
	std::cin >> cor->r >> cor->g >> cor->b >> cor->a;
}

void getInt(color* cor) {
	std::cin >> cor->dec;
}

void showColor(color* cor, bool is_rgba) {

	if (is_rgba) {
		std::cout << "RGBA: ";
		std::cout << (int)cor->r << (int)cor->g << (int)cor->b << (int)cor->a;
	}
	else if (!(is_rgba)) {
		std::cout << "DEC:  ";
		std::cout << cor->dec;
	}

}