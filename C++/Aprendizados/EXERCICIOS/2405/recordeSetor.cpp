#include <iostream>

int main(){
    float temposVerstappen [4];
    float menorTempo;

    std::cout << "Digite os tempos feito pelo Max nas 4 voltas (em segundos).\n";
    std::cout << "Digite o tempo da 1 volta:\n";
    std::cin >> temposVerstappen[0];

    menorTempo = temposVerstappen[0];
    for(int i = 1; i < 4; i++){
        std::cout << "Digite o tempo da " << i + 1 << " volta:\n";
        std::cin >> temposVerstappen[i];
        if (temposVerstappen[i] < menorTempo){
            menorTempo = temposVerstappen[i];
        }
    }
    std::cout << "O menor tempo foi de: " << menorTempo << "s.";
}