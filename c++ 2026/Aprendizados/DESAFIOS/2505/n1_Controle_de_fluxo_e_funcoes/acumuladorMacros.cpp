#include <iostream>

int main(){
    float qtdProteinasIngeridas = 0;
    int i = 1;

    while(true){
        float qtdInserida;
        std::cout << "Digite quantas proteinas ingeriu na " << i << " refeicao:\n";
        std::cin >> qtdInserida;
        if (qtdInserida == 0){
            break;
        } else{
            qtdProteinasIngeridas += qtdInserida;
            i++;
        }
    }
    if(qtdProteinasIngeridas < 160){
        std::cout << "Abaixo da meta de hipertrofia!";
    } else{
        std::cout << "Meta atingida, sintese proteica garantida!";
    }
}