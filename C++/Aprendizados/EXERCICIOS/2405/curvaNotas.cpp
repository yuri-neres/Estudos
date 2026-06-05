#include <iostream>

int main(){
    float notas [5] = {5.5, 7.0, 8.5, 4.0, 9.0};

    for(int i = 0; i < 5; i++){
        notas[i] += 1.5;
        if (notas[i] > 10){
            notas[i] = 10;
        }
        
    }
    
    for (int i = 0; i < 5; i++){
        std::cout << "Nota " << i + 1 << ": " << notas[i] << "\n";
    }
}