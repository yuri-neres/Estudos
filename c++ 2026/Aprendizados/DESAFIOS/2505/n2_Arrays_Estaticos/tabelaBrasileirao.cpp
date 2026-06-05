#include <iostream>

int main(){
    int tabela [5] {45, 42, 39, 38, 35};

    for (int i = 1; i <= 4; i++){
        if (tabela[0] - tabela[i] <= 3){
            std::cout << "Time " << i << " esta na briga pelo titulo!\n";
        }
    }
}