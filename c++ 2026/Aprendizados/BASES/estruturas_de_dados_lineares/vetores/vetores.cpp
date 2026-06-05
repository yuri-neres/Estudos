#include <iostream>
#include <vector>

int main(){
    std::vector<int> registroDeCargas;

    registroDeCargas.push_back(80);
    registroDeCargas.push_back(90);
    registroDeCargas.push_back(110);
    registroDeCargas.push_back(121);

    std::cout << "Cargas registradas:\n";
    for(int i = 0; i < registroDeCargas.size(); i++){
        std::cout << "Serie " << i << ": " << registroDeCargas[i] << "kg.\n";
    }

    return 0;
}