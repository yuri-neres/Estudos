#include <iostream>
#include <string>

void verificarTempo(std::string n1, int t1, std::string n2, int t2){
    if (t1 < t2){
        std::cout << "O piloto " << n1 << " foi quem fez o menor tempo e conquistou a pole!";
    }
    else{
        std::cout << "O piloto " << n2 << " foi quem fez o menor tempo e conquistou a pole!";
    }
}

int main() {
    std::string nomePiloto1, nomePiloto2;
    int tempoPiloto1, tempoPiloto2;

    std::cout << "Digite o nome do piloto 1 e do piloto 2 (separados por espaco):\n";
    std::cin >> nomePiloto1 >> nomePiloto2;

    std::cout << "Digite o tempo do piloto 1 e do piloto 2 (separados por espaco):\n";
    std::cin >> tempoPiloto1 >> tempoPiloto2;

    verificarTempo(nomePiloto1, tempoPiloto1, nomePiloto2, tempoPiloto2);

    return 0;
}