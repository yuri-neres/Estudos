#include <iostream>

int main(){
    int voltasRestantes = 0;
    float litrosTanque = 0, consumoVolta = 0;


    std::cout << "Digite quantos litros restam no tanque:\n";
    std::cin >> litrosTanque;
    std::cout << "Digite quantos litros gasta por volta de gasolina\n";
    std::cin >> consumoVolta;
    std::cout << "Digite quantas voltas restam:\n";
    std::cin >> voltasRestantes;


    if (consumoVolta * voltasRestantes < litrosTanque){
        std::cout << "Push push, combustivel ok!";

    } else{std::cout << "Box, box! Faltam " << (consumoVolta * voltasRestantes) - litrosTanque << " litros.";}
    
}