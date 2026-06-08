#include <iostream>
#include <vector>

void analisarPneus(char tipoPneu){
    switch (tipoPneu){
    case 'M':
    case 'm':
        std::cout << "---\nPneu Macio selecionado!\nVida util base: 17 voltas.\n---\n";
        break;
    case 'D':
    case 'd':
        std::cout << "---\nPneu Duro selecionado!\nVida util base: 43 voltas.\n---\n";
        break;
    default:
        std::cout << "Opcao Invalida!\n";
        break;
    }
}

void analisarPneus(char tipoPneu, int voltasRodadas){
    switch (tipoPneu){
    case 'M':
    case 'm':
        if (voltasRodadas >= 15){
            std::cout << "Pneu Macio no limite! Box recomendado.\n";
            break;
        } else {
            std::cout << "---\nPneu em boas condicoes.\n";
        }
        break;
    case 'D':
    case 'd':
        if (voltasRodadas >= 40){
            std::cout << "Pneu Duro desgastado! Box recomendado.\n";
            break;
        } else {
            std::cout << "---\nPneu em boas condicoes.\n";
            break;
        }
    default:
        std::cout << "---\nTipo de pneu invalido!\n";
        break;
    }
}

float desgasteComposto(int voltas){
    if (voltas == 1){
        return 0;
    } else if (voltas > 1){
        return 0.1 + desgasteComposto(voltas - 1);
    }
    return 0;
}

void atualizarTelemetria(float voltaNova, float &melhorVolta, int &voltasRodadas){
    voltasRodadas++;
    if (voltaNova < melhorVolta){melhorVolta = voltaNova;}
}

int main(){
    float deltaSetores[2][3]{
        {25.1, 30.2, 22.4},
        {25.3, 30.0, 22.6}
    }, voltaNova = 0, melhorVolta = 100;
    std::vector<float> tempoVoltas;
    int opcao = 0, qtdVoltas = 0, voltasPneu;
    char pneu;
    do{
        std::cout << "--- MENU ---\n1. Analise de Setores\n2. Registrar nova volta\n3. Relatorio de Desgaste\n0. Box, Box (Sair do simulador).\n";
        std::cin >> opcao;
        switch (opcao){
        case 1:
            for (int i = 0; i < 2; i++){
                if (i == 0){std::cout << "------\nVerstappen:\n";
                } else{std::cout << "------\nHamilton:\n";}     
                for (int j = 0; j < 3; j++){
                    std::cout << deltaSetores[i][j] << "s.\n";
                }
            }
            break;
        case 2:
            std::cout << "Digite o tempo da nova volta(em s):\n";
            std::cin >> voltaNova;
            tempoVoltas.push_back(voltaNova);
            atualizarTelemetria(voltaNova, melhorVolta, qtdVoltas);
            break;
        case 3:
            std::cout << "------\nDigite o tipo do pneu atual([M/D] Macio/Duro):\n";
            std::cin >> pneu;
            analisarPneus(pneu);
            std::cout << "Quantas voltas ele ja rodou?\n";
            std::cin >> voltasPneu;
            analisarPneus(pneu, voltasPneu);
            std::cout << "Desgaste de: " << desgasteComposto(voltasPneu) << ".\n";
            break;
        case 0:
            std::cout << "Saindo...\n";
            break;
        default:
            std::cout << "Opcao Invalida!\n";
            break;
        }
    } while (opcao != 0);
}