#include <iostream>
using namespace std;

class Emprestimo {
public:
    void realizarEmprestimo() {
        cout << "Livro emprestado com sucesso." << endl;
    }

    void status() {
        cout << "Emprestimo ativo." << endl;
    }
};

class Catalogo {
public:
    void consultarLivro() {
        cout << "Livro encontrado no catalogo." << endl;
    }

    void status() {
        cout << "Catalogo atualizado." << endl;
    }
};

class Biblioteca : public Emprestimo, public Catalogo {
public:
    void status() {
        cout << "Sistema da biblioteca funcionando." << endl;
    }
};

int main() {
    Biblioteca biblioteca;

    biblioteca.status();              // método da Biblioteca
    biblioteca.Emprestimo::status();  // método da classe Emprestimo
    biblioteca.Catalogo::status();    // método da classe Catalogo

    biblioteca.realizarEmprestimo();  // método da classe Emprestimo
    biblioteca.consultarLivro();      // método da classe Catalogo

    return 0;
}