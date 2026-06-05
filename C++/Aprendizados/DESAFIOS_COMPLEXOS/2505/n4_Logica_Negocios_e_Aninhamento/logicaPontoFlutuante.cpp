#include <iostream>
#include <vector>

void somar(float a, float b, float &resultado){
    resultado = a + b;
}
void multiplicar(float a, float b, float &resultado){
    resultado = a * b;
}
int main(){
    int temporario = 0;
    float num1 = 0, num2 = 0;
    std::vector<float> resultados;

    for (int i = 0; i < 3; i++){
        float numTemporario = 0;
        std::cout << "Digite 1 para somar ou 2 para multiplicar:\n";
        std::cin >> temporario;
        std::cout << "Digite os 2 numeros:\n";
        std::cin >> num1 >> num2;
        if(temporario == 1){
            somar(num1, num2, numTemporario);
            resultados.push_back(numTemporario);
        } else{
            multiplicar(num1, num2, numTemporario);
            resultados.push_back(numTemporario);
        }
    }
    std::cout << "--- RESULTADOS ---\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout << i + 1 << " - " << resultados[i] << ".\n";
    }
}