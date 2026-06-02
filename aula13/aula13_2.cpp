#include <iostream>
#include <string>

using namespace std;

// Classe base
class Pessoa {
protected:
    string nome;
    int idade;

public:
    void cadastrar() {
        cout << "Nome: ";
        cin >> nome;

        cout << "Idade: ";
        cin >> idade;
    }

    void exibir() {
        cout << "\nNome: " << nome;
        cout << "\nIdade: " << idade;
    }
};

// Classe derivada Aluno
class Aluno : public Pessoa {
private:
    string matricula;
    string curso;

public:
    void cadastrarAluno() {
        cadastrar(); // Método da classe base

        cout << "Matricula: ";
        cin >> matricula;

        cout << "Curso: ";
        cin >> curso;
    }

    void exibirAluno() {
        exibir(); // Método da classe base

        cout << "\nMatricula: " << matricula;
        cout << "\nCurso: " << curso;
    }
};

// Classe derivada Professor
class Professor : public Pessoa {
private:
    string disciplina;
    double salario;

public:
    void cadastrarProfessor() {
        cadastrar(); // Método da classe base

        cout << "Disciplina: ";
        cin >> disciplina;

        cout << "Salario: ";
        cin >> salario;
    }

    void exibirProfessor() {
        exibir(); // Método da classe base

        cout << "\nDisciplina: " << disciplina;
        cout << "\nSalario: R$ " << salario;
    }
};

int main() {
    Aluno aluno;
    Professor professor;

    cout << "=== Cadastro do Aluno ===\n";
    aluno.cadastrarAluno();

    cout << "\n\n=== Cadastro do Professor ===\n";
    professor.cadastrarProfessor();

    cout << "\n\n=== Dados do Aluno ===";
    aluno.exibirAluno();

    cout << "\n\n=== Dados do Professor ===";
    professor.exibirProfessor();

    cout << endl;

    return 0;
}