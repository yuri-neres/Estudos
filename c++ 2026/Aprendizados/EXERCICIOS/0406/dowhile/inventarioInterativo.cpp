#include <iostream>

int main(){
    int inventario = 0;

    do
    {
        std::cout << "Digite uma opcao:\n1.Combinar ervas.\n2.Examinar item.\n0.Fechar inventario.\n";
        std::cin >> inventario;
        switch (inventario)
        {
        case 1:
            std::cout << "Ervas combinadas!\n";
            break;
        case 2:
            std::cout << "Item examinado!\n";
            break;
        default:
            break;
        }
    } while (inventario != 0);
    
}