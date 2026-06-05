#include <iostream>
#include <string>

int main() {
    std::string itens[3] {"Alho (dentes)", "Cebolas", "Tomates"};
    float quantidades[3] {1.5, 0.5, 2.0};
    int pessoas = 0;

    std::cout << "Para quantas pessoas voce vai cozinhar?\n";
    std::cin >> pessoas;

    std::cout << "--------\nVoce vai precisar de:\n";
    for (int i = 0; i < 3; i++) {
        std::cout << quantidades[i] * pessoas << " " << itens[i] << std::endl;
    }
    return 0;
}