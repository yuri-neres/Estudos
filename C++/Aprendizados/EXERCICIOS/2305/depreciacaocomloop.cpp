#include <iostream>

int main(){
    float valor = 4500;
    int contador = 1;


    while (valor > 3000){
        valor = valor - (valor* 0.02);

        std::cout << "Mes " << contador << ": Valor atualizado R$ " << valor << ".\n";
        if (valor > 3000){contador++;}
    }

    std::cout << "Apartir do " << contador << " mes o dispositivo ira estar abaixo da casa dos 3000.\nValor de: R$ " << valor;
    
}