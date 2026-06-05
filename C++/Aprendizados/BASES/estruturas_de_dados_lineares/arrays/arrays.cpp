#include <iostream>

int main() {
    int cargas[6];

    std::cout << "--- REGISTRO DE CARGAS ---\n";

    for (int i = 0; i < 6; i++){
        std::cout << "Digite a carga do treino " << (i + 1) << ":\n";
        std::cin >> cargas[i];
    }

    std::cout << "--- RELATORIO FINAL ---\n";
    
    for (int i = 0; i < 6; i++){
        std::cout << "Treino " << (i + 1) << ": " << cargas[i] << "kg.\n";
    }

    return 0;
}