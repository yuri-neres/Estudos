#include <iostream>
#include <string>

int main(){
    std::string login, senha;

    std::cout << "Digite o login:\n";
    std::cin >> login;
    std::cout << "Digite a senha:\n";
    std::cin >> senha;
    
    if (login == "admin" && senha == "cpp123"){
        std::cout << "Acesso Liberado!";
    }
    else{
        std::cout << "Credenciais Invalidas.";
    }
}