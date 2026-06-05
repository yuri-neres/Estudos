#include <iostream>
#include <vector>

int main(){
    std::vector<float> notas {7.0, 6.9, 6.5, 8.2, 9.7, 10, 4, 3}, aprovados;
    float notaTemporaria;

    for(int i = 0; i < notas.size(); i++){
        notaTemporaria = notas[i];
        if (notaTemporaria >= 7){
            aprovados.push_back(notaTemporaria);
        }
    }
    
    std::cout << "--- Resultado ---\nQuantidade de Aprovados: " << aprovados.size() << ".\nNotas: \n";
    for(int i = 0; i < aprovados.size(); i++){
        std::cout << i + 1 << " - " << aprovados[i] << "\n";
    }

}