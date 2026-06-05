#include <iostream>
#include <vector>

void processarTreino(std::vector<float> &cargas, float &media, float &cargaMaxima){
    float soma = 0;
    for (int i = 0; i < cargas.size() - 1; i++){
        for (int j = 0; j < cargas.size() -i -1; j++){
            if (cargas[j] < cargas[j + 1]){
                float temp = cargas[j];
                cargas[j] = cargas[j + 1];
                cargas[j + 1] = temp;
            }
        }
    }
    if (cargas.size() > 0){
        cargaMaxima = cargas[0];
        for (int i = 0; i < cargas.size(); i++){
            soma += cargas[i];
        }
    }
    media = soma / cargas.size();
}

int main(){
    std::vector<float> cargas;
    float media = 0, cargaMaxima = 0;
    int i = 1;

    while (true){
        float temp = 0;
        std::cout << "Digite a carga levantada na " << i << " serie:\n";
        std::cin >> temp;
        if (temp != 0){
            cargas.push_back(temp);
            i++;
        } else{break; }
    }

    processarTreino(cargas, media, cargaMaxima);

    std::cout << "--- RESULTADOS ---\nQuantidade de Series: " << cargas.size() << ".\nMedia de peso: " << media << "kg.\nCarga Maxima(PR): " << cargaMaxima << "kg.\nLista de cargas da maior para a menor: ";
    for (int i = 0; i < cargas.size(); i++)
    {
        std::cout << cargas[i] << "kg.\n";
    }
}