#include <iostream>

int main() {
    float conta = 0;
    float pago = 0;
    float troco = 0;
    float contagemNotas = 0;
    int notasde50 = 0;
    int notasde20 = 0;
    int notasde10 = 0;


    std::cout << "Digite o valor da conta:\n";
    std::cin >> conta;
    std::cout << "Digite o valor pago em dinheiro:\n";
    std::cin >> pago;

    if (pago > conta){
        troco = pago - conta;
        contagemNotas = troco;
        while(contagemNotas > 0){
            if (contagemNotas >= 50){
                notasde50++;
                contagemNotas = contagemNotas - 50;
            } else if (contagemNotas >= 20){
                notasde20++;
                contagemNotas = contagemNotas - 20;
            } else if (contagemNotas >= 10){
                notasde10++;
                contagemNotas = contagemNotas - 10;
            } else{
                break;
            }
        }
        std::cout << "Voce precisa devolver de troco: R$ " << troco << ".\nNotas de 50: " << notasde50 << ".\nNotas de 20: " << notasde20 << ".\nNotas de 10: " << notasde10 << ".\nResto: R$ " << contagemNotas << ".";
    } else{
        std::cout << "Voce ainda precisa pagar: R$ " << conta - pago << ".";
    }
}