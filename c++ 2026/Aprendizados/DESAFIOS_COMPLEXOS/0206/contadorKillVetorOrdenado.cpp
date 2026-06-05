#include <iostream>
#include <vector>

int main(){
    std::vector<int> historicoKills;
    int somaKills = 0;

    std::cout << "Digite a quantidade de kills das ultimas 6 partidas.\n";
    for (int i = 0; i < 6; i++)
    {
        int kills = 0;
        std::cout << "Quantas kills:\n";
        std::cin >> kills;
        historicoKills.push_back(kills);
    }
    for (int i = 0; i < historicoKills.size() - 1; i++){
        for (int j = 0; j < historicoKills.size() - i - 1; j++){
            if (historicoKills[j] < historicoKills[j + 1])
            {
                int temp = historicoKills[j];
                historicoKills[j] = historicoKills[j+1];
                historicoKills[j + 1] = temp;
            }
        }
    }
    std::cout << "--- RESULTADO ORDENADO ---\n";
    for (int i = 0; i < historicoKills.size(); i++){
        std::cout << i + 1 << " Partida: " << historicoKills[i] << " kills.\n";
        if(i < 3){somaKills += historicoKills[i];}
    }
    std::cout << "Soma das 3 melhores partidas: " << somaKills << " kills.";
}