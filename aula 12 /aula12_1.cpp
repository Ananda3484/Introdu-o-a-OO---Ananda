#include <iostream>
using namespace std;

/*
Encapsulamento:
- Esconder os dados internos da classe
- Permitir acesso apenas através de métodos públicos
- Titular e saldo são Privados
- Só podem ser acessados através de métodos públicos
*/

class ContaBancaria {
private: //encapsulamento
    string titular;
    double saldo;
public: //encapsulamento
    //constructor inicializa o saldo da conta.
    contaBancaria() { //
        saldo = 0;
    }

    //setter - guardar
    void setTitular(string nome) {
        titular = nome;
    }

    //getter - buscar
    string getTitular() {
        return titular;
    }

    void depositar(double valor) {
    //validação - progrmação defensiva
        if (valor > 0) {
            saldo += valor;
            cout << "Deposito realizado!" << endl;
        }   
    }

    void sacar (double valor) {
        if (valor <= saldo) { // validação - programação defensiva
            saldo -= valor;
            cout << "Saque realizado!" << endl;
        } else {
            cout << "Saldo insuficiente!" << endl;
        }
    }

    double getSaldo() {
        return saldo;
    }
};
int main() {
    ContaBancaria conta; //criando o objeto
    /* Forma correta usando sempre o metodo de busca:
       conta.setTitular(...)
       Forma incorreta acessando a variavel
       sem o uso do metodo publico:
       conta.titular = "...";

    */

    conta.setTitular("Maria");
    conta.depositar(1000);
    cout << "Titular: " << conta.getTitular() << endl;
    cout << "Saldo atual: " << conta.getSaldo() << endl;
    conta.depositar(500);
    cout << "Saldo atual: " << conta.getSaldo() << endl;
    conta.sacar(200); 
    cout << "Saldo atual: " << conta.getSaldo() << endl;
    conta.sacar(2000); // saldo insuficiente
    cout << "Saldo atual: " << conta.getSaldo() << endl;
    return 0;
}
