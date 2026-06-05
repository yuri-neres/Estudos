#include <iostream>

int contagemRegressiva(int segundos){
    if(segundos <= 0){
        std::cout << "LARGADA!\n";
    }else{
        std::cout << segundos << "\n";
        contagemRegressiva(segundos - 1);
    }
    return 0;
}

int main() {
    int tempoContagem = 0;
    
    std::cout << "Digite quantos segundos para fazer a contagem regressiva:\n";
    std::cin >> tempoContagem;
    std::cout << "--- CONTAGEM ---\n";
    contagemRegressiva(tempoContagem);
    
    return 0;
}