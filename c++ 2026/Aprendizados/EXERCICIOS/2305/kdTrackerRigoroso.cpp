#include <iostream>

void calcularKD(int kill, int death){
    if (death == 0){
        std::cout << "K/D Perfeito!";
    } else{
        float resultadoKD = static_cast<float> (kill) / death;
        std::cout << "Voce matou: " << kill << "\nE morreu: " << death << "\nSeu K/D foi de: " << resultadoKD;
    }
    
}

int main(){
    int kill = 0;
    int deaths = 0;
    int somaKills = 0;
    int somaDeaths = 0;

    while(kill != -1){
        std::cout << "Digite quantas kills (se quiser parar digite -1):\n";
        std::cin >> kill;
        if (kill == -1){
            continue;
        } else{
            somaKills = somaKills + kill;
        }
        
        std::cout << "Digite quantas mortes:\n";
        std::cin >> deaths;
        somaDeaths = somaDeaths + deaths;
    }

    calcularKD(somaKills, somaDeaths);
}