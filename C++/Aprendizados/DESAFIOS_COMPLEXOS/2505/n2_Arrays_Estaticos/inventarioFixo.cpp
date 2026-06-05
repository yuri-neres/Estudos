#include <iostream>
#include <string>

int main(){
    std::string hotbar[5], itemDigitado;
    int escolherAlterar = 0;
    int alterarItem = 0;

    std::cout << "Voce tem uma hotbar com 5 slots.\n";
    for(int i = 0; i < 5; i++){
        std::cout << "Digite o item que esta no " << i + 1 << " slot:\n";
        std::cin >> itemDigitado;
        hotbar[i] = itemDigitado;
    }

    std::cout << "----------\nDeseja alterar algum item de slot(1 = sim. 2 = nao.)?\n";
    while(true){
        std::cin >> escolherAlterar;
        if (escolherAlterar == 1 || escolherAlterar == 2){
            break;
        } else{
            std::cout << "Numero incorreto, digite 1 ou 2:\n";
        }
    }

    if (escolherAlterar == 1){
        std::cout << "Qual slot voce quer substituir? (Digite de 1 a 5)\n";
        while(true){
            std::cin >> alterarItem;
            if(alterarItem > 0 && alterarItem < 6 ){
                --alterarItem;
                std::cout << "Qual item deseja por no lugar?\n";
                std::cin >> itemDigitado;
                hotbar[alterarItem] = itemDigitado;
                break;
            } else{
                std::cout << "Digite apenas entre 1 e 5:\n";
            }
        }
    }

    std::cout << "--- INVENTARIO ---\n";
    for(int i = 0; i < 5; i++){
        std::cout << "item no slot " << i + 1 << ": " << hotbar[i] << ".\n";
    }
}