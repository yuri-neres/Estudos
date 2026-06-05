#include <iostream>

void analistarTelemetria(float tempoA, float tempoB, float &melhorTempoTotal, int &empates){
    if (tempoA == tempoB) {
        empates++;
    }
    if (tempoA < melhorTempoTotal) { melhorTempoTotal = tempoA; }
    if (tempoB < melhorTempoTotal) { melhorTempoTotal = tempoB; }
}

int main(){
    float tempoVerstappen = 0, tempoHamilton = 0, melhorTempo = 100;
    int empates = 0;

    for(int i = 0; i < 5; i++){
        std::cout << "Digite o tempo " << i + 1 << " do Verstappen:\n";
        std::cin >> tempoVerstappen;
        std::cout << "Digite o tempo " << i + 1 << " do Hamilton:\n";
        std::cin >> tempoHamilton;

        analistarTelemetria(tempoVerstappen, tempoHamilton, melhorTempo, empates);
    }

    std::cout << "--- RESULTADO ---\nMelhor tempo: " << melhorTempo << "s.\nEmpates: " << empates << ".";
}