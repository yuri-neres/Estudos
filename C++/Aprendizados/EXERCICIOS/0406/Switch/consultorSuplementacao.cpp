#include <iostream>

int main(){
    int objetivo;

    std::cout << "Digite o seu objetivo principal:\n1 - Hipertrofia Limpa.\n2 - Forca Bruta.\n3 - Energia Imediata.\n";
    std::cin >> objetivo;

    switch (objetivo){
    case 1:
        std::cout << "Whei Protein Isolado.";
        break;
    case 2:
        std::cout << "Creatina Monohidratada.";
        break;
    case 3:
        std::cout << "Pre-Treino.";
        break;
    default:
        std::cout << "Objetivo nao reconhecido.";
        break;
    }
}