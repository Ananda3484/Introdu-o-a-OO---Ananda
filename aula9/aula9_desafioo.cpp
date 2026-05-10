#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Struct do livro
struct Livro {
    string nome;
    string autor;
};

int main() {

    stack<Livro> pilhaLivros;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {

        Livro l;

        cin.ignore();

        cout << "Digite o nome do livro: ";
        getline(cin, l.nome);

        cout << "Digite o autor: ";
        getline(cin, l.autor);

        // Adiciona na pilha
        pilhaLivros.push(l);

        cout << "\nDeseja cadastrar outro livro? (s/n): ";
        cin >> continuar;
    }

    cout << "\n=== LIVROS CADASTRADOS ===\n";

    // Mostra os livros da pilha
    while (!pilhaLivros.empty()) {

        Livro topo = pilhaLivros.top();

        cout << "\nLivro: " << topo.nome << endl;
        cout << "Autor: " << topo.autor << endl;

        pilhaLivros.pop();
    }

    return 0;
}