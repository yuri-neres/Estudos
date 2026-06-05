#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<int> kills;
    int i = 1, totalKills = 0, acimaMedia = 0;
    float mediaKills = 0;

    while (true){
        int killInserida = 0;
        std::cout << "Digite quantas kills fez na " << i << " partida(digite -1 para parar):\n";
        std::cin >> killInserida;
        while (killInserida < -1){
            std::cout << "Numero invalido, digite um numero positivo(-1 para parar):\n";
            std::cin >> killInserida;
        }
        if (killInserida == -1){
            break;
        } else{
            kills.push_back(killInserida);
        }
        i++;
    }

    for(int i = 0; i < kills.size(); i++){
        totalKills += kills[i];
    }

    mediaKills = static_cast<float>(totalKills) / kills.size();

    for(int i = 0; i < kills.size(); i++){
        if (kills[i] > mediaKills){
            acimaMedia++;
        }
    }
    std::cout << "O total de kills foi: " << totalKills << ".\nA media foi de: " << mediaKills << " kills.\n" << acimaMedia << " partidas ficaram acima da media.";
}