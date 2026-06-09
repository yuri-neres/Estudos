#include <iostream>
#include <vector>
#include <string>

void gerarLog(int idRemetente){
    std::cout << "Mensagem(ns) do usuario ID: " << idRemetente << ", arquivada com sucesso.\n";
}

void gerarLog(std::string textoErro, int codigoErro){
    std::cout << "ERRO " << codigoErro << ": " << textoErro << ". Acionando equipe de infraestrutura.\n";
}

int tempoReconexao(int tentativa){
    if (tentativa == 1){return 2;}
    else{return 2 * tempoReconexao(tentativa -1);}
}

void dispararFila(std::vector<std::string> &fila, int &sucessos, int &falhas){
    std::cout << "Enviando:\n";
    for (int i = 0; i < fila.size(); i++){
        std::cout << i + 1 << ": > " << fila[i] << " <\n";
        sucessos++;
    }
    fila.clear();
}


int main(){
    int logNotificao[5][2]{
        {101, 1},
        {102, 0},  
        {103, 1},  
        {104, 0},
        {105, 1}
    }, opcaoMenu = 0, totalSucessos = 0, totalFalhas = 0, verificarStatus = 1, tentativa = 0;
    std::vector<std::string> filaMensagens;
    std::string armazenarStrings;

    do{
      std::cout << "--- MENU ---\n1. Analisar logs (Matriz)\n2. Enfileirar mensagem (Vetor)\n3. Disparar servidor\n4. Simular Queda de Rede\n5. Forcar Erro Critico\n0. Desligar Servidor\n>> ";
      std::cin >> opcaoMenu;
      std::cout << "-----\n";
      switch (opcaoMenu)
      {
      case 1:
        armazenarStrings.clear();
        std::cout << "Relatorio:\n";
        for (int id = 0; id < 5; id++){
            if (verificarStatus == logNotificao[id][1]){
                armazenarStrings = "Sucesso";} else {armazenarStrings = "Falha";}
            
            std::cout << "ID: " << logNotificao[id][0] << ". Status: " << armazenarStrings << ".\n";
        }
        break;

      case 2:
        armazenarStrings.clear();
        std::cout << "Digite uma mensagem para ser armazenada:\n>> ";
        std::cin.ignore();
        std::getline(std::cin, armazenarStrings);
        filaMensagens.push_back(armazenarStrings);
        break;

      case 3:
        dispararFila(filaMensagens, totalSucessos, totalFalhas);
        gerarLog(999);
        break;
      case 4:
        tentativa = 0;
        std::cout << "Qual e a tentativa de reconexao atual?\n>> ";
        std:: cin >> tentativa;
        std::cout << "-----\nAguardando " << tempoReconexao(tentativa) << " segundos para tentar novamente...\n";
        break;
      case 5:
        gerarLog("timeout no Banco de Dados", 404);
        break;
      case 0:
        std::cout << "Desligando Servidor...";
        break;
      default:
        std::cout << "Opcao Invalida!\n";
        break;
      }
    } while (opcaoMenu != 0);
}