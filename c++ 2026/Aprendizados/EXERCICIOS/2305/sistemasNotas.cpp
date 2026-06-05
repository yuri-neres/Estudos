#include <iostream>

int main(){
    float notas = 1;
    int alunos = 0;
    int aprovados = 0;
    int recuperacao = 0;
    int reprovados = 0;

    std::cout << "Sistema de Notas (Acumulador com Condicao de Parada)\n";

    while(notas > 0){
        std::cout << "Digite a nota:\n";
        std::cin >> notas;
        
        if (notas > 10){
            std::cout << "A nota nao pode ser maior que 10.\n";
        } else if (notas >= 7){
            aprovados++;
        } else if (notas >= 4){
            recuperacao++;
        } else if(notas >= 0){
            reprovados++;
        } else{
            break;
        }
        alunos++;
    }

    std::cout << "Aprovados: " << aprovados << "\nRecuperacao: " << recuperacao << "\nReprovados: " << reprovados;

}