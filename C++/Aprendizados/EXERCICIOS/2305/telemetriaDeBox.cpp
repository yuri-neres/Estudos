#include <iostream>

int main(){
    float pitVerstappen = 0;
    float pitHamilton = 0;
    int volta = 0;

    for(int i = 1; i < 7; i++){
        float temporario = 0;
        if (i < 4){
        std::cout << "Digite o tempo do " << i << " pit stop do Verstappen:\n";
        std::cin >> temporario;
        pitVerstappen = pitVerstappen + temporario;
        } else{
        std::cout << "Digite o tempo do " << volta << " pit stop do Hamilton:\n";
        std::cin >> temporario;
        pitHamilton = pitHamilton + temporario;
        volta++;
        }
    }
    std::cout << "--- Tabela de tempo (media em segundos) ---\nVerstappen: " << pitVerstappen / 3 << "s.\nHamilton: " << pitHamilton / 3 << "s.\n";

    std::cout << "--------------\n";

    if (pitVerstappen < pitHamilton){std::cout << "A equipe de Verstappen ganhou o premio de pitstop mais rapido!";}
    else {std::cout << "A equipe de Hamilton ganhou o premio de pitstop mais rapido!";}
}