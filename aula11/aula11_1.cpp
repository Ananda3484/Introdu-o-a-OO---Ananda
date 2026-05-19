#include <iostream>
#include <string>
using namespace std;

// Definição da classe carro
class Carro
{
private:
    string modelo;
    string cor;
    int velocidade;
public:
    // Construtor
    Carro(string modelo, string cor, int velocidadeInicial)
    {
        this->modelo = modelo;
        this->cor = cor;
        this->velocidade = velocidadeInicial;
    }

    void exibirInformacoes() {
        cout << "Modelo: " << this->modelo << endl;
        cout << "Cor: " << this->cor << endl;
        cout << "Velocidade: " << this->velocidade << " km/h" << endl;
    }
};

int main()
{
    // Criando um objeto da classe Carro
    Carro carro1("Fusca", "Azul", 0);
    Carro carro2("Gol", "Vermelho", 0);
    Carro carro3("Uno", "Preto", 0);
    

    // Exibindo as informações do carro
    carro1.exibirInformacoes();
    carro2.exibirInformacoes();
    carro3.exibirInformacoes();

    return 0;
}
