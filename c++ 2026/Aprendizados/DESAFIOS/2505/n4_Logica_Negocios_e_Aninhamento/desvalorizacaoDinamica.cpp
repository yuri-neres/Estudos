#include <iostream>
#include <vector>

int main(){
    std::vector<float> precosMeses{4500};
    float valorTemp;

    for(int i = 0; i < 12; i++){
        valorTemp = precosMeses[i] - (precosMeses[i] * 0.02);
        precosMeses.push_back(valorTemp);
    }

    for(int i = 0; i < 12; i++){
        std::cout << "Valor mes " << i + 1 << ": R$ " << precosMeses[i] <<".\n";
    }
}