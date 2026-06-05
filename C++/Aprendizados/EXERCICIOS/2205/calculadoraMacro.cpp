#include <iostream>

void calculoMacro(float p, float qtd){
    std::cout << "---TABELA---\n"
    << "Peso: " << p << "\n"
    << "Quantidade: " << qtd << "\n"
    << "Voce devera ingerir: " << (qtd * p) << "g de proteina por peso corporal.";
}

int main(){
    float peso, quantidadeDesejada;

    std::cout << "Digite o seu peso e quantas gramas de proteina por kg corporal deseja ingerir diariamente para calcular (utilize espaco entre os numeros):\n";
    std::cin >> peso >> quantidadeDesejada;

    calculoMacro(peso, quantidadeDesejada);
}