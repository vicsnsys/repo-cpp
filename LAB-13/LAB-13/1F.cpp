#include <iostream>

union cor {
    char nome[10];
    char numero[6];
    char cod[5];
};

struct carro {
    char modelo[10];
    char anoFab[5];
    cor cor;
    int preco;
};

int main() {

    carro carros[10] = {};

    strcpy_s(carros[0].modelo, "Vectra");
    strcpy_s(carros[0].anoFab, "2009");
    strcpy_s(carros[0].cor.nome, "Azul");
    carros[0].preco = 58000;

    strcpy_s(carros[1].modelo, "Polo");
    strcpy_s(carros[1].anoFab, "2008");
    strcpy_s(carros[1].cor.nome, "Preto");
    carros[1].preco = 45000;

    for (int i = 2; i < 3; i++) {
        std::cout << "Modelo: ";
        std::cin >> carros[i].modelo;
        std::cout << "Ano: ";
        std::cin >> carros[i].anoFab;
        std::cout << "Nome: ";
        std::cin >> carros[i].cor.nome;
        std::cout << "Preco: ";
        std::cin >> carros[i].preco;
    }
    
    system("cls");

    for (int i = 0; i < 3; i++) {
        int qt = i + 1;
        std::cout << "Carro " << qt << ": " << std::endl;
        std::cout << "Modelo: " << carros[i].modelo << std::endl;
        std::cout << "Ano: " << carros[i].anoFab << std::endl;
        std::cout << "Nome: " << carros[i].cor.nome << std::endl;
        std::cout << "Preco: " << carros[i].preco << std::endl << std::endl;
    
    }

    return 0;
}
