#include <iostream>

int main(){
    float aguaSemanal [7];

    for(int i = 0; i < 7; i++){
        std::cout << "Digite a quantidade de agua bebida no " << i + 1 << " dia da semana:\n";
        std::cin >> aguaSemanal[i];
    }
    std::cout << "--- RELATORIO FINAL ---\n";
    
    for(int i = 0; i < 7; i++){
        std::cout << "Dia " << i + 1 << ": " << aguaSemanal[i] << "l.\n";
    }
}