#include <iostream>
#include <string>
using namespace std;

//Classe base
class veiculo {
protected:
    string marca;
    string cor;
    int velocidade;
public:
    Veiculo(string modelo, string cor, int velocidadeInicial)
    : modelo(modelo), cor(cor), velocidade(velocidadeInicial) {}

    void acelerar(int incremento) {
        velocidade += incremento;
    }

    void frear(int decremento) {
        velocidade = (velocidade - decremento >= 0) ? velocidade - decremento : 0;
    }

    void exibirInformacoes() {
        cout << "Modelo: " << modelo << endl;
        cout << "Cor: " << cor << endl;
        cout << "Velocidade: " << velocidade << " km/h" << endl;
    }

};

// Classe derivada - herdada herança
class Carro : public Veiculo {
public:
    int portas;

public:
    Carro(string modelo, string cor, int velocidadeInicial, int portas)
    : Veiculo(modelo, cor, velocidadeInicial), portas(portas) {}

    void exibirInformacoesCarro() const {
        exibirInformacoes();
        cout << "Portas: " << portas << endl;
    }
    
class Moto : public Veiculo {
public:
    int pezinho;

public:
    Moto(string modelo, string cor, int velocidadeInicial, int pezinho)
    : Veiculo(modelo, cor, velocidadeInicial), pezinho(pezinho) {}

    void exibirInformacoesMoto() const {
        exibirInformacoes();
        cout << "Pezinho: " << pezinho << endl;
    }
};

int main () {
    Carro meuCarro("Gol", "Cinza Escura", 0, 4);
    Moto minhaMoto("Biz", "Preta", 0, 2);

    meuCarro.acelerar(30);
    meuCarro.frear(10);

    meuCarro.exibirInformacoesCarro();

    minhaMoto.acelerar(30);
    minhaMoto.frear(10);

    minhaMoto.exibirInformacoesMoto();

    return 0;
}
