#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Definição da struct
struct Pessoa {
    string nome;
    int idade;
    float altura;
};

int main() {
    vector<Pessoa> pessoas; //vetor para armazenar várias pessoas
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        Pessoa p;

        cin.ignore(); //limpa o buffer de entrada antes de ler o nome

        //coletando dados
        cout << "Digite o nome: ";
        getline(cin, p.nome); //lê uma linha inteira para o nome

        cout << "Digite a idade: ";
        cin >> p.idade;

        cout << "Digite a altura: ";
        cin >> p.altura;

        pessoas.push_back(p); //adiciona a pessoa ao vetor

        cout << "\nDeseja cadastrar outra pessoa? (s/n): ";
        cin >> continuar;
    }

    //exibindo os dados
    cout << "\nDados das pessoas cadastradas:\n";
    for (int i =0; i < pessoas.size(); i++) {
        cout << "\nPessoa " << i + 1 << endl;
        cout << "Nome: " << pessoas[i].nome << endl;
        cout << "Idade: " << pessoas[i].idade << " anos" << endl;
        cout << "Altura: " << pessoas[i].altura << " m" << endl;
        cout << endl;
    }
    return 0;
}