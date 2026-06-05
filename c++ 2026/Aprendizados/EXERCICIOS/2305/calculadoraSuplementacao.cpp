#include <iostream>

void calcularMacros(float peso, float proteinaComida){
    float idealIngestao = peso * 2.2;

    if (proteinaComida > idealIngestao){
        std::cout << "Meta atingida com sucesso, guarde o Whey!";
    } else{
        int quantoFalta = idealIngestao - proteinaComida;

        std::cout << "Voce precisa ingerir ainda " << quantoFalta / 24 << " scoops de Whey.";
    }
    
}

int main() {
    float metaProteina = 0;
    float peso = 0;
    float proteinaingerida = 0;

    std::cout << "Digite o seu peso:\n";
    std::cin >> peso;

    std::cout << "Digite a quantidade de proteina ingerida:\n";
    std::cin >> proteinaingerida;

    calcularMacros(peso, proteinaingerida);
}