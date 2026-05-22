#include <iostream>
#include <string>
using namespace std;

//classe abstrata - interface
class Veiculo {
public:
    //Método virtual puro
    virtual void exibirInformacoes() const = 0; 
    //metodo obrigatorio para as classes filhas

    virtual ~Veiculo() {} //destrutor virtual  
};

// Classe deriva - Concreto: Carro
class Carro : public Veiculo {
    public:
    void exibirInformacoes() const override {
        cout << "Carro: Fusca Azul" << endl;
    }
};

// Classe derivada: Moto
class Moto : public Veiculo {
public:
    void exibirInformacoes() const override {
        //override para sobrepor o const = 0
        cout << "Moto: CG 160 preta" << endl;
    }
};

int main() {
    // classe virtual - Veiculo* e Carro classe concreta
    //Veiculo* = ponteiro para um objeto do tipo veiculo
    // crie um carro e guarde ele em um ponteiro do tipo veiculo
    Veiculo* v1 = new Carro();
    Veiculo* v2 = new Moto();

    v1->exibirInformacoes(); //carro: fusca azul
    v2->exibirInformacoes(); //moto: CG 160 preta

    delete v1; //liberar a memoria alocada
    delete v2; //liberar a memoria alocada
    return 0;
}
