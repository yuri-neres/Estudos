#include <iostream>

int main() {
    int planilhaCargas[3][4] = {
        {80, 85, 90, 100},
        {40, 45, 50, 55},
        {60, 65, 70, 75}
    };

    std::cout << "Carga especifica: " << planilhaCargas[1][2] << "kg.\n";

    for (int linha = 0; linha < 3; linha++){
        std::cout << "Treino " << linha + 1 << ": ";
        for (int coluna = 0; coluna < 4; coluna++) {
            std::cout << planilhaCargas[linha][coluna] << "kg ";
        }
        std::cout << "\n";
    }
    return 0;
}