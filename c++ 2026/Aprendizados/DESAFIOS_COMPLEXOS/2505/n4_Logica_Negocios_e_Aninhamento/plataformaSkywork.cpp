#include <iostream>
#include <vector>

int main(){
    int metaProdutividade[4] {100, 120, 100, 130}, numTemp = 0, metaTemp = 0;
    std::vector<int> produtividadeFuncionario;
    bool bateuTudo = true;

    for(int i = 0; i < 4; i++){
        std::cout << "Digite a produtividade do " << i + 1 << " mes:\n";
        std::cin >> numTemp;
        produtividadeFuncionario.push_back(numTemp);
        if (produtividadeFuncionario[i] >= metaProdutividade[i]){metaTemp++;}
    }
    if (metaTemp != 4){
        bateuTudo = false;
    }

    std::cout << "--- RESULTADO BONUS ---\n";
    if (bateuTudo){
        std::cout << "Bonus Liberado!";
    } else{
        std::cout << "Sem bonus este semestre.";
    }
    
}