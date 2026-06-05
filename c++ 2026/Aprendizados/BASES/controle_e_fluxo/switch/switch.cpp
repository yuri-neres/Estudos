#include <iostream>

int main(){
    int opcao;
    std::cout << "--- INVENTARIO ---\n1. Usar Erva Verde\n2. Combinar Polvora\n3. Descartar Item\nEscolha:\n";
    std::cin >> opcao;

    switch (opcao){
    case 1:
        std::cout << "Vida restaurada!\n";
        break;
    case 2:
        std::cout << "Municao criada!\n";
        break;
    case 3:
        std::cout << "Item descartado.\n";
        break;
    default:
        std::cout << "Opcao invalida.\n";
        break;
    }
    return 0;
}