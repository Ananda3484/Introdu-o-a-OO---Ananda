#include <iostream>
using namespace std;

class Pessoa {
private:
    string nome;
    string sobrenome;
    int idade;
    string genero;

public:
    // Construtor
    Pessoa(string n, string s, int i, string g) {
        nome = n;
        sobrenome = s;
        idade = i;
        genero = g;
    }

    void comer() {
        cout << nome << " esta comendo." << endl;
    }

    void dormir() {
        cout << nome << " esta dormindo." << endl;
    }

    void pensar() {
        cout << nome << " esta pensando." << endl;
    }

    void trabalhar() {
        cout << nome << " esta trabalhando." << endl;
    }

    void programar() {
        cout << nome << " esta programando um sistema." << endl;
    }

    void exibirDados() {
        cout << "\n=== DADOS DA PESSOA ===" << endl;
        cout << "Nome: " << nome << " " << sobrenome << endl;
        cout << "Idade: " << idade << endl;
        cout << "Genero: " << genero << endl;
    }
};

int main() {
    Pessoa pessoa1("Ananda", "Silva", 20, "Feminino");

    pessoa1.exibirDados();

    pessoa1.comer();
    pessoa1.pensar();
    pessoa1.programar();
    pessoa1.trabalhar();
    pessoa1.dormir();

    return 0;
}