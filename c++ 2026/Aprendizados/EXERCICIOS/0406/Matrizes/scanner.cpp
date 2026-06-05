#include <iostream>

int main() {
    int tela[5][5]{
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
    }, coorX = 0, coorY = 0;
    std::cout << "Digite uma coordenada X(Linha) e Y(Coluna):\n";
    std::cin >> coorX >> coorY;

    tela[coorX - 1][coorY - 1] = 1;

    for (int coluna = 0; coluna < 5; coluna++){
        for (int linha = 0; linha < 5; linha++){
         std::cout << tela[coluna][linha];
        }
        std::cout << "\n";
    }
}