#include <iostream>

int calcularVirus(int horas){
    if (horas == 0){
        return 1;
    }
    return 2 * calcularVirus(horas - 1);
}

int main() {
    int horas = 10;

    std::cout << calcularVirus(horas);
}