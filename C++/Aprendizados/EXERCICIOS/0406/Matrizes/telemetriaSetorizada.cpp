#include <iostream>

int main() {
    float tempos[2][3] = {
        {25.1, 30.2, 22.4},
        {25.3, 30.0, 22.6}
    }, tempoVerstappen = 0, tempoHamilton = 0;
    std::string ganhador;

    for (int piloto = 0; piloto < 2; piloto++){
        float soma = 0;
        for (int voltas = 0; voltas < 3; voltas++){
            soma += tempos[piloto][voltas];
        }
        if (piloto == 0){
            tempoVerstappen = soma;
        } else{tempoHamilton = soma;}
    }

    if (tempoVerstappen < tempoHamilton){
        ganhador = "Verstappen"; 
    } else{
        ganhador = "Hamilton";
    }
    
    std::cout << "Tempo de volta:\nVerstappen: " << tempoVerstappen << "s.\nHamilton: " << tempoHamilton << "s.\nA equipe vencedora foi a de: " << ganhador << ".";
}