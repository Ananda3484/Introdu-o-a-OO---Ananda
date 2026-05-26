#include <iostream>
using namespace std;

// Classe base
class Funcionario {
public:
    string nome;
    double salario;

    // Construtor
    Funcionario(string n, double s) {
        nome = n;
        salario = s;
    }

    // Função para calcular salário
    virtual double calcularSalario() {
        return salario;
    }
};

// Classe Gerente
class Gerente : public Funcionario {
public:
    double bonus;

    Gerente(string n, double s, double b)
        : Funcionario(n, s) {
        bonus = b;
    }

    double calcularSalario() {
        return salario + bonus;
    }
};

// Classe Vendedor
class Vendedor : public Funcionario {
public:
    double comissao;

    Vendedor(string n, double s, double c)
        : Funcionario(n, s) {
        comissao = c;
    }

    double calcularSalario() {
        return salario + comissao;
    }
};

int main() {

    Gerente gerente("Thiago Rosa", 5000, 1000);
    Vendedor vendedor("Ananda Santos", 2000, 500);

    // Gerente
    cout << "GERENTE" << endl;
    cout << "Nome: " << gerente.nome << endl;
    cout << "Salario base: R$ " << gerente.salario << endl;
    cout << "Bonus recebido: R$ " << gerente.bonus << endl;
    cout << "Salario final: R$ "
         << gerente.calcularSalario() << endl;

    cout << endl;

    // Vendedor
    cout << "VENDEDOR" << endl;
    cout << "Nome: " << vendedor.nome << endl;
    cout << "Salario base: R$ " << vendedor.salario << endl;
    cout << "Comissao recebida: R$ " << vendedor.comissao << endl;
    cout << "Salario final: R$ "
         << vendedor.calcularSalario() << endl;

    return 0;
}