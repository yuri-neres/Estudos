#include <iostream>

int somaCargas(int pr){
    if (pr == 1){return 1;}
    
    return pr + somaCargas(pr - 1);
}

int main(){
    int pr = 5;
    

    std::cout << somaCargas(pr);
}