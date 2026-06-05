#include <iostream>

int main(){
    char pneu;

    std::cout << "Selecione um Pneu (M = macio, D = duro, C = chuva):\n";
    std::cin >> pneu;

    std::cout << pneu;

    switch (pneu){
    case 'M':
    case 'm':
        std::cout << "Alta aderencia, dura 15 voltas.";
        break;
    case 'D':
    case 'd':
        std::cout << "Baixa aderencia, dura 40 voltas.";
        break;
    case 'C':
    case 'c':
        std::cout << "Pneu ranhurado ativado!";
        break;
    default:
        std::cout << "Opcao invalida.";
        break;
    }
}