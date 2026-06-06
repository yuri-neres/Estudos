#include <iostream>
#include <vector>

void registrarMacro(float gramasProteina){
    std::cout << "Proteina isolada registrada: " << gramasProteina << "g.\n---\n";
}
void registrarMacro(float gramasCarbo, float gramasGordura){
    std::cout << "Refeicao mista registrada. Carbo: " << gramasCarbo << "g, Gordura: " << gramasGordura << "g.";
}
float absorcaoProteica(float gramas, int horas){
    if (horas == 0){return gramas;}
    if (horas > 0){return absorcaoProteica(gramas * 0.90, horas - 1);}
    return 0;
}
void fecharDia(std::vector<float> &prots, float &caloriasTotais){
    float soma = 0;
    for (int i = 0; i < prots.size(); i++){
        soma += prots[i];
    }
    caloriasTotais = soma * 4;
}

int main() {
    float planoAlimentar[7][3]{
        {45.5, 65.0, 50.2}, 
        {40.0, 70.5, 55.3},
        {30.5, 60.0, 45.7},
        {45.0, 75.0, 60.5},
        {50.0, 80.0, 65.5},
        {35.0, 65.0, 55.0},
        {40.5, 70.0, 50.0}
    }, caloriasTotais = 0, temporario = 0;
    int opcao = 0, horas;
    std::vector<float> proteinasDiarias = {};

    do{
        std::cout << "--- MENU ---\n1. Consultar plano semanal\n2. Inserir proteinas avulsas\n3. Calcular taxa de absorcao\n4. Fechar dia atual\n0. Dormir (Sair do aplicativo)\n";
        std::cin >> opcao;
        std::cout << "---\n";
        switch (opcao){
        case 1:
            for (int linha = 0; linha < 7; linha++){
                std::cout << "Dia " << linha + 1 << ":\n";
                for (int coluna = 0; coluna < 3; coluna++){
                    std::cout << planoAlimentar[linha][coluna] << "g.\n";
                }
                if(linha < 6){std::cout << "---\n";}
            }
            break;
        case 2:
            temporario = 0;
            std::cout << "Digite a quantidade de proteina(-1 = parar).\n";
            while (temporario != -1){
                std::cout << "Digite o valor:\n";
                std::cin >> temporario;
                if (temporario > 0){
                    proteinasDiarias.push_back(temporario);
                    registrarMacro(temporario);
                }
            }
            break;
        case 3:
            temporario = 0;
            horas = 0;
            std::cout << "Digite a quantidade de proteina(em g):\n";
            std::cin >> temporario;
            std::cout << "Digite o numero de horas:\n";
            std::cin >> horas;
            std::cout << "---\nTaxa: " << absorcaoProteica(temporario, horas) << "g/h.\n";
            break;
        case 4:
            if (proteinasDiarias.size() > 0){
                fecharDia(proteinasDiarias, caloriasTotais);
                std::cout << "Caloria total de proteina ingerida: " << caloriasTotais << "kcal.\n";
                proteinasDiarias.clear();
                caloriasTotais = 0;
                break;
            } else{
                std::cout << "Nenhum macro registrado! Retornando...\n";
            }
            break;
        case 0:
            std::cout << "Boa noite! Fechando app...";
            break;
        default:
            std::cout << "Opcao Invalida!\n";
            break;
        }
    } while (opcao != 0);
}