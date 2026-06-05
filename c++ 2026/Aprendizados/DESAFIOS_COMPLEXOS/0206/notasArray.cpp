#include <iostream>
#include <vector>

int main() {
    std::vector<float> notas;
    float soma = 0, media = 0;
    int acima = 0;

    while (true) {
        float nota;
        std::cin >> nota;

        if (nota > 10) {
            std::cout << "Nota invalida, tente novamente." << std::endl;
        } else if (nota < 0) {
            break;
        } else {
            notas.push_back(nota);
        }
    }

    for (int i = 0; i < notas.size(); i++) {
        soma += notas[i];
    }

    if(notas.size() > 0){media = soma / notas.size();};
    std::cout << "Soma das notas: " << soma << std::endl;
    std::cout << "Media das notas: " << media << std::endl;

    for (int i = 0; i < notas.size(); i++){
        if (notas[i] > media) {
            acima++;
        }
    }
    std::cout << "Quantidade de notas acima da média: " << acima << std::endl;

    return 0;
}