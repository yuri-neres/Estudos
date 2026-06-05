#include <iostream>
#include <string>

int main() {
    std::string nome;
    int idade;
    double carga;

    std::cout << "Qual e o seu nome? ";
    std::cin >> nome;

    std::cout << "Digite sua idade e a carga (kg) do exercicio separados por espaco: ";
    std::cin >> idade >> carga;
    
    std::cout << "--------------------------" << std::endl;
    std::cout << "Atleta: " << nome << std::endl;
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Carga utilizada no supino: " << carga << "kg" << std::endl;

    return 0;
}
