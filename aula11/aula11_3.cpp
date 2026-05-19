#include <iostream>
#include <string>

using namespace std;

class Carro {
private:
    string modelo;
    string cor;
    int velocidade;

public:
    Carro(string modelo, string cor, int velocidadeInicial) {
        this->modelo = modelo;
        this->cor = cor;
        this->velocidade = velocidadeInicial;
    }

    void exibirInformacoes() {
        cout << "Modelo: " << this->modelo << endl;
        cout << "Cor: " << this->cor << endl;
        cout << "Velocidade: " << this->velocidade << " km/h" << endl;
        cout << "------------------------" << endl;
    }

    void acelerar(int aumento) {
        this->velocidade += aumento;
        cout << this->modelo << " acelerou +" << aumento << " km/h" << endl;
    }

    void frear(int reducao) {
        this->velocidade -= reducao;

        // não deixar ficar negativo (porque carro não anda pra trás nesse modelo kkk)
        if (this->velocidade < 0) {
            this->velocidade = 0;
        }

        cout << this->modelo << " reduziu -" << reducao << " km/h" << endl;
    }
};

int main() {
    Carro carro1("Fusca", "Azul", 0);
    Carro carro2("Gol", "Vermelho", 0);
    Carro carro3("Civic", "Preto", 0);
    Carro bike("caloi", "preto", 10);

    carro1.acelerar(30);
    carro1.frear(10);

    carro2.acelerar(80);
    carro2.frear(20);

    carro3.acelerar(120);
    carro3.frear(50);

    bike.acelerar(120);
    bike.frear(50);

    carro1.exibirInformacoes();
    carro2.exibirInformacoes();
    carro3.exibirInformacoes();
    bike.exibirInformacoes();

    return 0;
}