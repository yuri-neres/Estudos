#include <iostream>

void escalarReceita(int pessoas){
    float denteAlho = 3, cebola = 1, tomate = 4;
    if(pessoas == 2){
        std::cout << "Para " << pessoas << " pessoas voce precisara:\n" << denteAlho << " dentes de alho.\n" << cebola << " cebola.\n" << tomate << " tomates.";
    } else{
        denteAlho = denteAlho / 2; 
        cebola = cebola /2;
        tomate = tomate / 2;
        std::cout << "Para " << pessoas << " pessoas voce precisara:\n" << denteAlho * pessoas << " dentes de alho.\n" << cebola * pessoas << " cebola.\n" << tomate * pessoas << " tomates.";
    }
}

int main(){
    int pessoas = 0;

    std::cout << "---Base da receita e para 2 pessoas---\n";
    while (pessoas < 1){
        std::cout << "Digite quantas pessoas vao comer:\n";
        std::cin >> pessoas;
    }

    escalarReceita(pessoas);
}