#include <iostream>

int main() {
    std::cout << "Iniciando contagem regressiva...\n";
    
    for (int i = 5; i > 0; --i)
        std::cout << i << "\n";

    std::cout << "LARGADA!";
}