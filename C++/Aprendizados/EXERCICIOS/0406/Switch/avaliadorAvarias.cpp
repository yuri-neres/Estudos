#include <iostream>

int main() {
    int verificarTela;
    std::cout << "Verificador de avarias de tela:\n1 = Intacta\n2 = Riscos Superficiais\n3 = Trincada.\n";
    std::cin >> verificarTela;
    switch (verificarTela){
    case 1:
        std::cout << "Desconto nulo. Aparelho Premium.";
        break;
    case 2:
        std::cout << "Desconto de R$ 300 na avaliacao.";
        break;
    case 3:
        std::cout << "Necessario trocar o display (R$1200).";
        break;
    default:
        std::cout << "Opcao invalida!";
        break;
    }
}