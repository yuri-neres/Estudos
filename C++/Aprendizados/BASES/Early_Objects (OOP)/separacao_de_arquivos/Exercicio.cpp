#include <iostream>
#include "Exercicio.h" // Importa o arquivo de cabecalho!

Exercicio::Exercicio(std::string nomeInicial, float cargaInicial, int seriesIniciais, int repsIniciais){
    setNome(nomeInicial);
    setCarga(cargaInicial);
    setSeries(seriesIniciais);
    setRepeticoes(repsIniciais);
}

void Exercicio::setCarga(float cargaDigitada) {
    if (cargaDigitada > 0) {
        carga = cargaDigitada;
    } else {
        std::cout << "Erro: Carga invalida.\n";
    }
}

void Exercicio::setNome(std::string nomeDigitado){
    nome = nomeDigitado;
}
        
void Exercicio::setSeries(int serieDigitada){
    if (serieDigitada > 0){
        series = serieDigitada;
    } else{std::cout << "Erro: Serie invalida.\n";}
}

void Exercicio::setRepeticoes(int repeticaoDigitada){
    if (repeticaoDigitada > 0){
        repeticoes = repeticaoDigitada;
    } else{std::cout << "Erro: Repeticao invalida.\n";}
}

std::string Exercicio::getNome() {
    return nome;
}

float Exercicio::getCarga(){
    return carga;
}

int Exercicio::getSeries(){
    return series;
}

int Exercicio::getRepeticoes(){
    return repeticoes;
}

float Exercicio::calcularVolumeTotal(){
    return carga * series * repeticoes;
}

void Exercicio::imprimirRelatorio(){
    std::cout << "Exercicio: " << nome << ".\nCarga: " << carga << "kg.\nSeries: " << series << "x" << repeticoes << ".\nVolume total: " << calcularVolumeTotal() << "kg.\n";
}