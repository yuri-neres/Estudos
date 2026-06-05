#include <iostream>

int main() {
    float volume[4][5] ={}, cargaTemp = 0;

    for (int semana = 0; semana < 4; semana++){
        std::cout << "Digite a carga da " << semana + 1 << " semana:\n";
        for (int linha = 0; linha < 5; linha++){
            std::cin >> cargaTemp;
            volume[semana][linha] = cargaTemp; 
        }
    }
    float somaTotal = 0;
    for (int coluna = 0; coluna < 4; coluna++){
        for (int linha = 0; linha < 5; linha++){
            somaTotal += volume[coluna][linha];
        }  
    }

    std::cout << "A carga total pegada no mes foi de: " << cargaTemp << "kg.";
}