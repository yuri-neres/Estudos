#include <iostream>

int main() {
    float peso = 0, soma = 0;
    std::cout << "Digite o peso da 1a serie:\n";
    std::cin >> peso;

    for(int i = 2; i <= 5; i++){
        std::cout << "Digite o peso da " << i << "a serie:\n";
        std::cin >> peso;
        if (peso >= 100){
            std::cout << "Atencao: Carga de alta intensidade registrada!\n";
        }
        soma = soma + peso;
    }

}