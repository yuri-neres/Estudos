#include <iostream>

int main(){
    int somaMinerios = 0;
    int vulnerabilidadePicareta = 10;

    std::cout << "---Simulador de Minecraft---\nDigite o minerio que voce encontrou:\n1.Pedra\n2.Ferro\n3.Diamante\n";
    
    for(int i = 0; i < 5;){
        int minerio = 0;
        std::cout << "Digite o numero referente ao minerio:\n";
        std::cin >> minerio;
        vulnerabilidadePicareta -= 2;

        if (vulnerabilidadePicareta == 0){
            std::cout << "Sua picareta quebrou!";
            break;
        }

        if (minerio == 1){
            somaMinerios++;
            i++;
        } else if (minerio == 2){
            somaMinerios = somaMinerios + 5;
            i++;
        } else if (minerio == 3){
            somaMinerios = somaMinerios + 50;
            i++;
        } else{
            std::cout << "Opcao invalida!";
        }
    }
    std::cout << "Sua pontuacao final foi de: " << somaMinerios << " pontos.";
}