#include <iostream>

int main(){
    float idade;

    std::cout << "Digite uma idade para validar:\n";
    std::cin >> idade;
    
    while (idade <= 0 || idade >= 120 ){
        std::cout << "Idade invalida, tente novamente:\n";
        std::cin >> idade;   
    }

    std::cout << "Idade valida!";
}