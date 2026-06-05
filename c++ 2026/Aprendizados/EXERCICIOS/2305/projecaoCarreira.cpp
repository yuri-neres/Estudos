#include <iostream>

int main() {
    float salarioBase = 4000;
    int metaBatida = 0;

    for(int i= 1; i < 6; i++){
        std::cout << "O funcionario bateu as metas do ano " << i << "?\n1-sim.\n2-nao.\n";
        std::cin >> metaBatida;

        if (metaBatida == 1){
            salarioBase = salarioBase + (salarioBase * 0.1);
        } else{
            salarioBase = salarioBase + (salarioBase * 0.04);
        }
        std::cout << "Salario no " << i << " ano: R$ " << salarioBase << ".";
    }

    std::cout << "O salario projetado ao final do 5o ano foi de:\nR$ " << salarioBase << ".";
}