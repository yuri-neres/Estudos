#include <iostream>

int main() {
    std::string grid[3][3] = {};

    grid[0][0] = "ferro"; 
    grid[0][1] = "ferro"; 
    grid[0][2] = "ferro";
    grid[1][1] = "graveto"; 
    grid[2][1] = "graveto";

    for (int coluna = 0; coluna < 3; coluna++){
        for (int linha = 0; linha < 3; linha++){
            std::cout << grid[coluna][linha];
        }
        std::cout << "\n";
    }
    
}