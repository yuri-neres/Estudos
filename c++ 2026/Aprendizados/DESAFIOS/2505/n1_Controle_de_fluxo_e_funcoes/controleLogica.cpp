#include <iostream>

void analisarNumero(int num){
    if (num == 0){
        std::cout << "Numero neutro\n";
    } else if(num % 2 == 0 && num > 0){
        std::cout << "Numero par e positivo!\n";
    } else if(num % 2 == 0 && num < 0){
        std::cout << "Numero par e negativo!\n";
    } else if(num % 2 != 0 && num > 0){
        std::cout << "Numero Impar e Positivo!\n";
    } else{
        std::cout << "Numero Impar e negativo!\n";
    }
}

int main(){
    int numero = 0;
    std::cout << "Saiba se o numero e par ou impar(positivo ou negativo).\n";

    for(int i = 0; i < 3; i++){
        std::cout << "Digite o numero:\n";
        std::cin >> numero;
        analisarNumero(numero);
    }
}