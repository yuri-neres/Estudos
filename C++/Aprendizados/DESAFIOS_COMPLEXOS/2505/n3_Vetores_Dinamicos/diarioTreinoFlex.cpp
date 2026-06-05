#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<std::string> exercicios;

    while (true){
        std::string verificarExercicio;
        std::cout << "Digite o nome do exercicio (utilizando no lugar do espaco > (_)):\n";
        std::cin >> verificarExercicio;
        
        if (verificarExercicio != std::string("fim")){
            exercicios.push_back(verificarExercicio);
        } else{
            break;
        }
    }
    std::cout << "--- LISTA COMPLETA ENUMERADA ---\n";
    std::cout << "Total de exercicios hoje: " << exercicios.size() << ".\n";
    for(int i = 0; i < exercicios.size(); i++){
        std::cout << i + 1 << " - " << exercicios[i] << ".\n";
    }
}