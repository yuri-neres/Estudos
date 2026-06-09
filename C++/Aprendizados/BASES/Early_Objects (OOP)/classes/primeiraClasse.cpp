#include <iostream>
#include <vector>
#include <string>

class Exercicio{
    private:
        std::string nome;
        float carga;
        int series, repeticoes;

    public:
        Exercicio(std::string nomeInicial, float cargaInicial, int seriesIniciais, int repsIniciais){
            setNome(nomeInicial);
            setCarga(cargaInicial);
            setSeries(seriesIniciais);
            setRepeticoes(repsIniciais);
        }

        void setNome(std::string nomeDigitado){
            nome = nomeDigitado;
        }
        void setCarga(float cargaDigitada){
            if (cargaDigitada > 0){
                carga = cargaDigitada;
            } else{std::cout << "Erro: Carga invalida.\n";}
        }
        void setSeries(int serieDigitada){
            if (serieDigitada > 0){
                series = serieDigitada;
            } else{std::cout << "Erro: Serie invalida.\n";}
        }
        void setRepeticoes(int repeticaoDigitada){
            if (repeticaoDigitada > 0){
                repeticoes = repeticaoDigitada;
            } else{std::cout << "Erro: Repeticao invalida.\n";}
        }

        std::string getNome(){
            return nome;
        }

        float getCarga(){
            return carga;
        }

        int getSeries(){
            return series;
        }

        int getRepeticoes(){
            return repeticoes;
        }

        float calcularVolumeTotal(){
            return carga * series * repeticoes;
        }
        
        void imprimirRelatorio(){
            std::cout << "Exercicio: " << nome << ".\nCarga: " << carga << "kg.\nSeries: " << series << "x" << repeticoes << ".\nVolume total: " << calcularVolumeTotal() << "kg.\n";
        }
};

int main(){
    std::vector<Exercicio> treinoDeHoje;
    int opcao = 0, seriesTemp = 0, repsTemp = 0;
    std::string nomeTemp;
    float cargaTemp = 0;

    do
    {
        std::cout << "--- MENU ---\n1. Adicionar novo exercicio\n2. Imprimir Treino Completo\n3. Calcular Carga Total Levantada\n0. Sair e descansar.\n>> ";
        std::cin >> opcao;
        std::cout << "-----\n";
        switch (opcao){
        case 1:
            std::cout << "Digite o nome:\n>> ";
            std::cin.ignore();
            std::getline(std::cin, nomeTemp);
            std::cout << "Digite a carga:\n>> ";
            std::cin >> cargaTemp;
            std::cout << "Digite quantas series e repeticoes(enter entre os valores):\n>> ";
            std::cin >> seriesTemp >> repsTemp;
            treinoDeHoje.push_back(Exercicio(nomeTemp, cargaTemp, seriesTemp, repsTemp));
            break;
        case 2:
            std::cout << "--- RELATORIO ---\n";
            for (int i = 0; i < treinoDeHoje.size(); i++){
                treinoDeHoje[i].imprimirRelatorio();
                std::cout << "-----\n";
            }
            break;
        case 3: {
            float volumeGlobal = 0;
            for (int i = 0; i < treinoDeHoje.size(); i++){
                std::cout << "Processando volume de: " << treinoDeHoje[i].getNome() << "...\n";
                volumeGlobal += treinoDeHoje[i].calcularVolumeTotal();
            }
            std::cout << "Parabens! Hoje voce levantou um total de " << volumeGlobal << "kg.\n";
            break;
        }
        case 0:
            std::cout << "Bom descanso! Encerrando...\n";
            break;
        default:
            std::cout << "Opcao Invalida!\n";
            break;
        }    
    } while (opcao != 0);
}