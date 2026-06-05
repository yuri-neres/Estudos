#include <iostream>

int main(){
    int itemsID [6] {104, 205, 11, 48, 99, 13};

    std::cout << "--- LISTA ID'S INVERTIDAS ---\n";
    for(int i = 5; i >= 0; --i){
        std::cout << "ID: " << itemsID[i] << ".\n";
    }
}