#include <string>

class Exercicio{
    private:
        std::string nome;
        float carga;
        int series, repeticoes;

    public:
        Exercicio(std::string nomeInicial, float cargaInicial, int seriesIniciais, int repsIniciais);

        void setNome(std::string nomeDigitado);
        void setCarga(float cargaDigitada);
        void setSeries(int serieDigitada);
        void setRepeticoes(int repeticaoDigitada);

        std::string getNome();
        float getCarga();
        int getSeries();

        int getRepeticoes();

        float calcularVolumeTotal();
        
        void imprimirRelatorio();
};