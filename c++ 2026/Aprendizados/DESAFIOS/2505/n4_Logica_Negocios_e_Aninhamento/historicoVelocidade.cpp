#include <iostream>
#include <vector>

int main(){
    std::vector<float> velocidadeEntradaBox;
    float numDigitado = 1, min = 0, max = 0;
    int contador = 1;

    std::cout << "Digite a velocidade de entrada no box de quantas vezes quiser (digite 0 para parar):\n";
    std::cin >> numDigitado;
    velocidadeEntradaBox.push_back(numDigitado);
    min = max = velocidadeEntradaBox[0];

    while (numDigitado != 0){
        std::cout << "Digite a velocidade:\n";
        std::cin >> numDigitado;
        if (numDigitado != 0){
            velocidadeEntradaBox.push_back(numDigitado);
            if(numDigitado > max){
                max = numDigitado;
            } else if(numDigitado < min){
                min = numDigitado;
            }
            contador++;
        }
    }

    std::cout << "--- RELATORIO FINAL ---\n";
    for(int i = 0; i < velocidadeEntradaBox.size(); i++){
        std::cout << "Velocidade " << i + 1 << " = " << velocidadeEntradaBox[i] <<"km/h.\n";
    }

    std::cout << "A menor velocidade foi = " << min << "km/h.\nA maior velocidade foi = " << max << "km/h.";
}