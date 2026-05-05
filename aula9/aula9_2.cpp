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
    Pessoa p;

    //coletando dados
    cout << "Digite o nome: ";
    getline(cin, p.nome); //lê uma linha inteira para o nome

    cout << "Digite a idade: ";
    cin >> p.idade;

    cout << "Digite a altura: ";
    cin >> p.altura;

    //exibindo os dados
    cout << "\nDados a pessoa:\n";
    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;
    cout << "Altura: " << p.altura << " metros" << endl;

    return 0;
}