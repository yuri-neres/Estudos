#include <iostream>
#include <string>

void imprimirResumo(std::string ex, int s, int r, float c) {
    std::cout <<"--- RESUMO DA SERIE ---\n"
    << "Exercicio: " << ex << "\n"
    << "Formato: " << s << "x" << r << "\n"
    << "Carga: " << c << "kg" << "\n"
    << "Volume total: " << (s * r * c) << "kg" << std::endl;
}

int main() {
    std::string exercicio;
    int series, repeticoes;
    float cargaUtilizada;

    std::cout << "Digite em ordem, o exercicio, series, repeticoes e carga (separados por espaco):\n";
    
    std::cin >> exercicio >> series >> repeticoes >> cargaUtilizada;

    imprimirResumo(exercicio, series, repeticoes, cargaUtilizada);

    return 0;
}