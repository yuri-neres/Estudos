#include <iostream>

float desvalorizar(float valor, int meses){
    if (meses == 0){
        return valor;
    }
    return desvalorizar(valor * 0.98, meses - 1);
}

int main() {
    float valor = 4500;
    int meses = 12;

    std::cout << desvalorizar(valor, meses);
}