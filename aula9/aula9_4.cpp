#include <iostream>
#include <string>
using namespace std;

//Definição da struct
struct Pessoa {
    string nome;
    int idade;
    float altura;
};

int main() {
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        Pessoa p;

        cin.ignore();

        //coletando dados
        cout << "Digite o nome: ";
        getline(cin, p.nome);

        cout << "Digite a idade: ";
        cin >> p.idade;

        cout << "Digite a altura: ";
        cin >> p.altura;

        //exibindo os dados
        cout << "\nDados da pessoa cadastrada:\n";
        cout << "Nome: " << p.nome << endl;
        cout << "Idade: " << p.idade << " anos" << endl;
        cout << "Altura: " << p.altura << " m" << endl;

        cout << "\nDeseja cadastrar outra pessoa? (s/n): ";
        cin >> continuar;
    }

    return 0;
}