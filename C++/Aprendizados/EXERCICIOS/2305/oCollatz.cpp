#include <iostream>

int main(){
    int numeroDigitado = 0;

    std::cout << "Digite um numero:\n";
    std::cin >> numeroDigitado;

    while(numeroDigitado != 1){
        if (numeroDigitado % 2 == 0){
            numeroDigitado = numeroDigitado / 2;
            std::cout << "Transformado em: " << numeroDigitado << "\n";
        } else{
            numeroDigitado = (numeroDigitado * 3) + 1;
            std::cout << "Transformado em: " << numeroDigitado << "\n";
        }
    }
    std::cout << "Saiu do loop virando " << numeroDigitado;
}