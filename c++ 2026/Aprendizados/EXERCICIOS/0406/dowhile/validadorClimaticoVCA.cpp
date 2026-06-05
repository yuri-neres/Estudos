#include <iostream>

int main(){
    float umidadeVCA = 0;

    do
    {
        std::cout << "Digite a umidade atual:\n";
        std:: cin >> umidadeVCA;
    } while (umidadeVCA < 0 || umidadeVCA > 100);
    std::cout << "Umidade registrada com sucesso.";
}