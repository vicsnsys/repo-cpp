#include <iostream>
#include <string>

enum Tipo { JPG, PNG, BMP };

struct imagem {
    std::string nome;
    unsigned int altura;
    unsigned int largura;
    Tipo tipo;
};

void detalhes(imagem* temp);

int main() {
    imagem img = {
        "backg.png",
        1080,
        1920,
        PNG
    };

    detalhes(&img);

    return 0;
}

void detalhes(imagem* temp) {
    std::string upperType;

    if (temp->tipo == JPG) {
        upperType = "JPG";
    }
    else if (temp->tipo == PNG) {
        upperType = "PNG";
    }
    else if (temp->tipo == BMP) {
        upperType = "BMP";
    }

    std::cout << "A imagem '"
        << temp->nome
        << "' com tamanho "
        << temp->largura << "x" << temp->altura
        << " tem formato " << upperType << ".\n";
}
