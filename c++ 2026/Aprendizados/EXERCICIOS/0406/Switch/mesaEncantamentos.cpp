#include <iostream>

int main() {
    int encantamento;

    std::cout << "Digite o nivel de encanto(1, 2 ou 3):\n";
    std::cin >> encantamento;

    switch (encantamento)
    {
    case 1:
        std::cout << "Afiacao I aplicada.";
        break;
    case 2:
        std::cout << "Repulsao II aplicada.";
        break;
    case 3:
        std::cout << "Inquebravel III aplicada.";
        break;
    default:
        std::cout << "Encantamento nao encontrado.";
        break;
    }
    
}