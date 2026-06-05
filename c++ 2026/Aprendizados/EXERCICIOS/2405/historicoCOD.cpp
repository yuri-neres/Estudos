#include <iostream>

int main(){
    int quantidadeKills [6];
    int partidasDestaque = 0;

    for(int i = 0; i < 6; i++){
        std::cout << "Digite quantas kills voce fez na " << i + 1 << " partida:\n";
        std::cin >> quantidadeKills[i];
        if (quantidadeKills[i] > 20){
            partidasDestaque++;
        }
    }
    std::cout << "Voce matou mais de 20 em: " << partidasDestaque << " partidas!";
}