#include <iostream>

int main() {
    int numeroEscolhido;

    std::cout << "Digite um numero para ter a tabuada ate o 10:\n";
    std::cin >> numeroEscolhido;

    for (int i = 0; i <= 10; i++){
        std::cout << numeroEscolhido << " x " << i << " = " << numeroEscolhido * i << "\n";
    }
}