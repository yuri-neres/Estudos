#include <iostream>

int main() {
    int continuar;

    do {
        std::cout << "Treino finalizado. Deseja registrar outro? (1-Sim / 0-Nao):\n";
        std::cin >> continuar;
    } while (continuar != 0);

    std::cout << "Saindo do sistema...\n";
    return 0;
}