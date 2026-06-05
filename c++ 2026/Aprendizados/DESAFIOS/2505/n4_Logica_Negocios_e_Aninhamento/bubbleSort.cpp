#include <iostream>
#include <vector>

int main(){
    std::vector<int> cargas;
    int temporario = 0, cargaTemp = 0;

    std::cout << "Digite 5 cargas aleatorias para receber em ordem decrescente.\n";
    for(int i = 0; i < 5; i++){
        int cargaTemp = 0;
        std::cout << "Digite o " << i + 1 << " valor:\n";
        std::cin >> cargaTemp;
        cargas.push_back(cargaTemp);
    }

    for (int i = 0; i < cargas.size(); i++){
        
        for (int j = i + 1; j < cargas.size(); j++){
            if (cargas[i] < cargas[j]){
                temporario = cargas[i];
                cargas[i] = cargas[j];
                cargas[j] = temporario;
            }
        }
        
    }
    
    std::cout << "--- RESULTADO ---\n";
    for (int i = 0; i < cargas.size(); i++){
        std::cout << "Indice " << i << ": " << cargas[i] << ".\n";
    }
}