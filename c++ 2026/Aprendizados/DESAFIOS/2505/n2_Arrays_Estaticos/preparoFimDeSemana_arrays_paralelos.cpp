#include <iostream>
#include <string>

int main(){
    std::string ingredientes[3] {"Alho", "Cebola", "Tomate"};
    float quantidades[3] {3.0, 1.0, 4.0}, multiplicador;

    std::cout << "Digite por quanto quer multiplicar cada ingrediente da receita:\n";
    std::cin >> multiplicador;

    for (int i = 0; i < 3; i++){
        std::cout << ingredientes[i] << ": " << quantidades[i] * multiplicador << ".\n";
    }
}