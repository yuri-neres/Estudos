#include <iostream>

int main() {
    int opcao;

    std::cout << "--- Portal de acesso ---\n1-Acessar Notas.\n2-Acessar frequencia.\n3-Acessar financeiro.\n";
    std::cin >> opcao;

    switch (opcao){
    case 1:
        std::cout << "Acessando Notas...";
        break;
    case 2:
        std::cout << "Acessando Frequencia...";
        break;
    case 3:
        std::cout << "Acessando Financeiro...";
        break;
    default:
        std::cout << "Opcao invalida no sistema.";
    }
}