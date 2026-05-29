#include <iostream>
#include <string>
using namespace std;

class Livro {
private:
    string titulo;
    string autor;
    string editora;
    int anoPublicacao;
    bool aberto;
    bool alugado;

public:
    // Construtor
    Livro(string t, string a, string e, int ano) {
        titulo = t;
        autor = a;
        editora = e;
        anoPublicacao = ano;
        aberto = false;
        alugado = false;
    }

    void abrir() {
        aberto = true;
        cout << "O livro foi aberto." << endl;
    }

    void fechar() {
        aberto = false;
        cout << "O livro foi fechado." << endl;
    }

    void ler() {
        if (aberto) {
            cout << "Voce esta lendo o livro: " << titulo << endl;
        } else {
            cout << "Abra o livro primeiro." << endl;
        }
    }

    void alugar() {
        if (!alugado) {
            alugado = true;
            cout << "Livro alugado com sucesso." << endl;
        } else {
            cout << "Livro ja esta alugado." << endl;
        }
    }

    void guardar() {
        aberto = false;
        cout << "Livro guardado na estante." << endl;
    }

    void exibirInformacoes() {
        cout << "\n=== DADOS DO LIVRO ===" << endl;
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Editora: " << editora << endl;
        cout << "Ano de Publicacao: " << anoPublicacao << endl;
    }
};

int main() {
    Livro livro1("Dom Casmurro", "Machado de Assis", "Editora Moderna", 1899);

    livro1.exibirInformacoes();

    livro1.abrir();
    livro1.ler();
    livro1.fechar();
    livro1.alugar();
    livro1.guardar();

    return 0;
}