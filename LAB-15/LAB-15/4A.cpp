#include <iostream>

enum class Continente {
    Africa,
    AmericaDoNorte,
    AmericaDoSul,
    Antartida,
    Asia,
    Europa,
    Oceania
};


struct Local {
	char nome[20];
	char pais[20];
    Continente continente;
};

std::istream& operator>>(std::istream& is, Local& loc);
std::ostream& operator<<(std::ostream& os, Local& loc);

int main() {

    int qtdLoc = 0;
    std::cout << "Quantos locais voce quer visitar? ";
    std::cin >> qtdLoc;

    Local* vLoc = new Local[qtdLoc];

    for (int i = 0; i < qtdLoc; i++) {
        std::cout << "Local " << (i + 1) << std::endl;
        std::cin >> vLoc[i];
    }


    for (int i = 0; i < qtdLoc; i++) {
        std::cout << "Local " << (i + 1) << std::endl;
        std::cout << vLoc[i];
    }

    delete[] vLoc;
	return 0;
}

std::istream& operator>>(std::istream& is, Local& loc) {
    std::cout << "Nome do Local: ";
    is >> loc.nome;
    std::cout << "Pais: ";
    is >> loc.pais;
    std::cout << "Continente\n[0] - Africa\n[1] - America do Norte\n[2] - America Do Sul\n[3] - Antartida\n[4] - Asia\n[5] - Europa\n[6] - Oceania\nDigite: ";
    int cont;
    is >> cont;
    loc.continente = static_cast<Continente>(cont);
    return is;
}

std::ostream& operator<<(std::ostream& os, Local& loc) {
    os << "--------------------------------------" << std::endl;
    os << "Nome: " << loc.nome << std::endl;
    os << "Pais: " << loc.pais << std::endl;

    if (loc.continente == Continente::Africa) {
        os << "Continente: Africa" << std::endl;
    }
    else if (loc.continente == Continente::AmericaDoNorte) {
        os << "Continente: America do Norte" << std::endl;
    }
    else if (loc.continente == Continente::AmericaDoSul) {
        os << "Continente: America do Sul" << std::endl;
    }
    else if (loc.continente == Continente::Antartida) {
        os << "Continente: Antartida" << std::endl;
    }
    else if (loc.continente == Continente::Asia) {
        os << "Continente: Asia" << std::endl;
    }
    else if (loc.continente == Continente::Europa) {
        os << "Continente: Europa" << std::endl;
    }
    else if (loc.continente == Continente::Oceania) {
        os << "Continente: Oceania" << std::endl;
    }

    os << "--------------------------------------" << std::endl;

    return os;

}