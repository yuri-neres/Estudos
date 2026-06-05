#include <iostream>
#include <vector>

int main(){
    std::vector<float> historicoCargas;
    float cargaInserida = 1;

    while (true){
        std::cout << "Digite a carga da serie (ou 0 para encerrar):\n";
        std::cin >> cargaInserida;
        if(cargaInserida == 0){
            break;
        } else{
            historicoCargas.push_back(cargaInserida);
        }
    }
    std::cout << "--- RESUMO DO TREINO ---\nTotal de series realizadas: " << historicoCargas.size() << ".\n";

    for(int i = 0; i < historicoCargas.size(); i++){
        std::cout << "Serie "<< i + 1 << ": " << historicoCargas[i] << "kg.\n";
    }
}