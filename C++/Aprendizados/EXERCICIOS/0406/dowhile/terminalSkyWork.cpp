#include <iostream>

int main(){
    int senha = 1234, tentativa;

    do
    {
        std::cout << "Digite a senha:\n";
        std::cin >> tentativa;
    } while (tentativa != senha);
    
    std::cout << "Acesso liberado aos paineis da skywork.";
}