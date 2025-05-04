#include <iostream>

int main() {
    std::cout << "Aposta dos amigos \n -------------------\n";
    float a1, a2;
    int premio;

    std::cout << "Digite a quantia apostada pelo jogador 1: ";
    std::cin >> a1;
    std::cout << "Digite a quantia apostada pelo jogador 2: ";
    std::cin >> a2;
    std::cout << "Entre com o valor do premio: ";
    std::cin >> premio;

    // Calcula a proporção de cada jogador (em %, depois multiplicamos pelo premio, pegando o equivalente ao apostado)
    float proporcao1 = a1 / (a1 + a2);
    float proporcao2 = a2 / (a1 + a2);

    // Calcula o prêmio proporcional para cada um
    int premio1 = premio * proporcao1;
    int premio2 = premio * proporcao2;

    std::cout << "O jogador 1 tem direito a R$" << premio1 << std::endl;
    std::cout << "O jogador 2 tem direito a R$" << premio2 << std::endl;

    return 0;
}