#include <iostream>

int main(){
    int sequenciaCofre [4] {2, 4, 1, 3}, acertos = 0, numeroTentativa = 0;
    std::cout << "Tente desbloquear o cofre da mansao. Voce tem 3 tentativas.\n";

    while(numeroTentativa < 3){
        int tentativa[4] {}, numeroDigitado;
        std::cout << "Tentativa " << numeroTentativa + 1 << ":\n";
        for (int i = 0; i < 4; i++){
            std::cin >> numeroDigitado;
            if (numeroDigitado == sequenciaCofre[i]){
                tentativa[i] = numeroDigitado;
                acertos+=1;
                std::cout << acertos;
            }
        }
        if (acertos == 4){
            std::cout << "------\nCofre aberto!\n";
            break;
        } else{
            std::cout << "Senha incorreta!\n";
            acertos = 0;
        }
        numeroTentativa++;
    }
    if (acertos != 4){
        std::cout << "Voce falhou em abrir o cofre!";
    }
}