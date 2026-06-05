#include <iostream>

void resultadoAprovados(int ap){
    std::cout << "Foram aprovados: " << ap << " alunos.";
}

int main(){
    float notas;
    int aprovados = 0;

    for(int i = 1; i < 5; i++){
        std::cout << "Digite a nota do aluno:\n";
        std::cin >> notas;

        if(notas >= 7){
            aprovados++;
        }
    }

    resultadoAprovados(aprovados);
}