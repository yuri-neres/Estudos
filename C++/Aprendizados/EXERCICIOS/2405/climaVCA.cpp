#include <iostream>

int main(){
    float temperaturasVCA [5] = {28.5, 29.0, 27.2, 30.1, 26.8}, soma = 0;

    for(int i = 0; i < 5; i++){
        soma = soma + temperaturasVCA[i];
    }
    std::cout << "A media das 5 temperaturas registras e de = " << soma / 5 <<" graus Celsius.";
}