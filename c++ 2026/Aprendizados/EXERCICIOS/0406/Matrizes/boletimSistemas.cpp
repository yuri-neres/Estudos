#include <iostream>

int main() {
    float notas[3][4]{
        {6.3, 7.7, 8.3, 5.7},
        {3.0, 4.5, 6, 4.0},
        {9.0, 8.9, 7, 7.3},
    };

    for (int coluna = 0; coluna < 3; coluna++){
        float soma = 0, media = 0;
        for (int linha = 0; linha < 4; linha++){
            soma += notas[coluna][linha];   
        }
        media = soma / 4;
        std::cout << "Media do aluno " << coluna + 1 << ": " << media << ".\n";
    }
}