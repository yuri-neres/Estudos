#include <iostream>
#include <vector>

void combinarItens(int item1, int item2){
    if (item1 + item2 == 3){
        std::cout << "---\nMunicao Curativa criada!\n";
    } else{
        std::cout << "---\nCombinacao invalida.\n";
    }
}

void combinarItens(int grid[3][3]){
    int soma = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            soma += grid[i][j];
        }
    }
    if (soma > 5){
        std::cout << "Item mitico forjado na bancada!\n";
    } else{
        std::cout << "Bancada insuficiente!\n";
    }
}

int calcularDanoCritico(int acertos){
    if (acertos == 1){return 10;}
    else{return 2 * calcularDanoCritico(acertos - 1);}
    return 0;
}

void consumirItem(int idItem, std::vector<int> &mochila, int &espacosLivres){
    for (int i = 0; i < mochila.size(); i++){
        if (idItem == mochila[i]){
            mochila.erase(mochila.begin() + i);
            espacosLivres++;
            break;
        }
    }
}

int main(){
    int craftingGrid[3][3]{
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    }, espacosLivres = 10, opcao = 0, numTemp = 0, contador = 0, num1 = 0, num2 = 0;
    std::vector<int> inventarioMochila;

    inventarioMochila.push_back(1); // Pólvora
    inventarioMochila.push_back(2); // Erva
    inventarioMochila.push_back(1);
    
    do{
        std::cout << "--- MENU ---\n1. Preencher Bancada\n2. Forjar na bancada\n3. Combinar itens das maos\n4. Atacar monstro\n5. Consumir item\n0. Salvar e sair\n";
        std::cin >> opcao;
        switch (opcao){
        case 1:
            std::fill(craftingGrid[0], craftingGrid[0] + (3 * 3), 0);
            contador = 0;
            std::cout << "---\nDigite 9 itens para preencher a bancada:\n";
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    contador++;
                    std::cout << "Item " << contador << ":\n";
                    std::cin >> craftingGrid[i][j];
                    std:: cout << "----\n";
                    for (int k = 0; k < 3; k++){
                        for (int l = 0; l < 3; l++){
                            std::cout << craftingGrid[k][l];
                        }
                        std::cout << "\n";
                    }
                    std::cout << "---\n";
                }
            }
            break;
        case 2:
            std::cout << "---\n";
            combinarItens(craftingGrid);
            break;
        case 3:
            std::cout << "---\nDigite 2 numeros para combinar itens: ";
            std::cin >> num1 >> num2;
            combinarItens(num1, num2);
            break;
        case 4:
            numTemp = 0;
            std::cout << "Digite quantos acertos:\n";
            std::cin >> numTemp;
            std::cout << "---\n" << "Dano: " << calcularDanoCritico(numTemp) << "hp.\n";
            break;
        case 5:
            std::cout << "Digite o ID do item para consumir:\n";
            std::cin >> numTemp;

            consumirItem(numTemp, inventarioMochila, espacosLivres);
            std::cout << "Espacos livres na mochila: " << espacosLivres << ".\n";
            break;
        case 0:
            std::cout << "Salvando e saindo...\n";
            break;
        default:
            std::cout << "Opcao Invalida!";
            break;
        }
    } while (opcao != 0);
}