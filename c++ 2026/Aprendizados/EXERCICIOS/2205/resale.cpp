#include <iostream>
#include <string>

void avaliarAparelho (int capacidadeGB, bool telaIntacta){
    
    if(telaIntacta == false){
        std::cout << "Aparelho danificado: R$ 800";
    }
    else if (capacidadeGB >= 512 && telaIntacta == true){
        std::cout << "Avaliacao Maxima: R$ 3500";
    }
    else if(capacidadeGB < 512 && telaIntacta == true){
        std::cout << "Avaliacao Media: R$ 2000";
    }
}

int main(){
    int capacidade;
    std::string opcao;
    bool telaIntacta;

    std::cout << "Digite a capacidade em gb do seu dispositivo:\n";
    std::cin >> capacidade;

    std::cout << "A tela esta intacta?\n1 - Sim.\n2 - Nao.\n";
    std::cin >> opcao;
    
    if (opcao == "1"){
        telaIntacta = true;
    }
    else{
        telaIntacta = false;
    }
    avaliarAparelho(capacidade, telaIntacta);
}