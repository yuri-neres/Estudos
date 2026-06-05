#include <iostream>

int main() {
    int repeticoes = 0, continuar;

    do
    {
        repeticoes++;
        std::cout << "Repeticao " << repeticoes << " concluida!\n";
        std::cout << "Ainda aguenta mais uma? (1 para Sim, 0 para Nao):\n";
        std::cin >> continuar;
        
    } while (continuar != 0);
    std::cout << "--- RESULTADO ---\nTotal de repeticoes = " << repeticoes;
}