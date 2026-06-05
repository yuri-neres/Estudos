#include <iostream>
#include <string>

int main() {
    std::string exercicio;
    int series;
    int repeticoes;
    float carga, volumeTotalDoDia = 0;
    int continuar = 1;

    while(continuar == 1){
        std::cout << "Digite o nome do exercicio, serie, repeticoes e carga:\n";
        std::cin >> exercicio >> series >> repeticoes >> carga;
        volumeTotalDoDia = volumeTotalDoDia + (series * repeticoes * carga);
        std::cout << "Deseja registrar outro exercicio? (1 para Sim, 0 para Nao):\n";
        std::cin >> continuar;
    }

    std::cout << "------------------\nFim do treino!\nO volume total levantado hoje foi: " << volumeTotalDoDia << "kg";
}