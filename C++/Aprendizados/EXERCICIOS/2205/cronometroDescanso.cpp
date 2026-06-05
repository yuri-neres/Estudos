#include <iostream>

int main() {
    int tempo = 45;

    while (tempo > 0){
        std::cout << "Descansando... Tempo restante: " << tempo << "s" << "\n";
        tempo = tempo - 15;
    }

    std::cout << "Volte para a maquina!";
    
}