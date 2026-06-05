#include <iostream>
#include <string>

void verificarVelocidadeBox(std::string pil, float vel) {
    std::cout <<  "---DECISAO DA DIRECAO DE PROVA---\n"
    << "Piloto: " << pil << "\n"
    << "Velocidade: " << vel << " km/h\n";

    if (vel <= 80) {
        std::cout << "Veredito: Parada Regular. Piloto liberado!" << std::endl;
    }
    else if (vel <= 85) {
        std::cout << "Veredito: Infracao Leve! Multa financeira aplicada." << std::endl;
    }
    else {
        std::cout << "Veredito: Infracao Grave! Punicao de Drive-Through aplicada.\n";
    }
}

int main() {
    std::string piloto;
    float velocidade;

    std::cout << "Digite o nome do piloto e a velocidade registrada no radar (separados por espaco):" << std::endl;
    std::cin >> piloto >> velocidade;

    verificarVelocidadeBox(piloto, velocidade);
}