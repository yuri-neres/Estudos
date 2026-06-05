#include <iostream>
#include <vector>

void calcularMedia(float matriz[][4], std::vector<float>&medias){
    float notaTemp = 0, mediaTemp;
    for (int linha = 0; linha < 3; linha++){
        float soma = 0;
        for (int coluna = 0; coluna < 4; coluna++){
            notaTemp = matriz[linha][coluna];
            soma += notaTemp;
        }
        mediaTemp = soma / 4;
        medias.push_back(mediaTemp);
    }
}

float calcularMedia(std::vector<float> &mediaSemestreAtual){
    float soma = 0;
    if(mediaSemestreAtual.size() > 0){
        for (int i = 0; i < mediaSemestreAtual.size(); i++){
            soma += mediaSemestreAtual[i];
        }
    }
    return soma / mediaSemestreAtual.size();
}

void atualizarAprovados(float media, int &contadorAprovados){
    if (media >= 7){contadorAprovados++;}
}

float projetarEvasao(float taxaInicial, int semestres){
    if (semestres == 0){return taxaInicial;}
    return projetarEvasao(taxaInicial / 2, semestres - 1);
}

int main() {
    float historico[3][4] = {
        {7.5, 8.0, 6.5, 9.0},
        {5.5,7.0,8.5,6.0},
        {9.5, 8.0, 7.5, 10.0}
    }, notaDigitada = 0, mediaSemestreAtual = 0, soma = 0, taxaInicial;
    std::vector<float> semestreAtual, medias;
    int opcoesMenu[4] {1, 2, 3, 0}, digitarOpcao = 0, aprovados = 0, semestres = 0;

    do
    {
        std::cout << "--- MENU ---\n1. Calcular historico matricial\n2. Inserir notas no vetor atual\n3. Projetar evasao\n0. Sair\nDigite a opcao:\n";
        std::cin >> digitarOpcao;
        switch (digitarOpcao){
            case 1:
                medias.clear();
                aprovados = 0;
                calcularMedia(historico, medias);
                std::cout << "--- MEDIAS HISTORICO ---\n";
                for (int i = 0; i < medias.size(); i++){
                    atualizarAprovados(medias[i], aprovados);
                    std::cout << "Aluno " << i + 1 << ": " << medias[i] << ".\n";
                }
                std::cout << "Aprovados: " << aprovados << ".\n";
                break;
            case 2:
                semestreAtual.clear();
                std::cout << "----\nDigite as notas para adicionar(caso deseja parar digite -1):\n";
                while (true){
                    std::cin >> notaDigitada;
                    if (notaDigitada == -1){
                        break;
                    } else{
                        semestreAtual.push_back(notaDigitada);
                }
                std::cout << "Digite a nota:\n";
                }
                std::cout << "--- RESULTADO ---\nMedia do Aluno = " << calcularMedia(semestreAtual) << ".\n";

                if (calcularMedia(semestreAtual) >= 7.0){
                    std::cout << "Aluno Aprovado!\n";
                } else{
                    std::cout << "Aluno Reprovado!\n";
                }
                break;
            case 3:
                std::cout << "----\nDigite quantos semestres deseja projetar:\n";
                std::cin >> semestres;
                std::cout << "Digite a taxa inicial:\n";
                std::cin >> taxaInicial;
                std::cout << "--- Resultado ---\nA taxa no semestre " << semestres << " sera de: " << projetarEvasao(taxaInicial, semestres) << "%.\n" ;
                break;
            case 0:
                std::cout << "Saindo...\n";
                break;
            default:
                std::cout << "Opcao Invalida!\n";
                break;
            }
    } while (digitarOpcao != 0);
}