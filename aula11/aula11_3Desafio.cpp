#include <iostream>
#include <string>

using namespace std;

// Classe Usuario
class Usuario {
private:
    string nome;
    string email;
    string senha;
    string cargo;

public:
    // Construtor
    Usuario(string nome, string email, string senha, string cargo) {
        this->nome = nome;
        this->email = email;
        this->senha = senha;
        this->cargo = cargo;
    }

    // Método para fazer login
    void fazerLogin(string emailDigitado, string senhaDigitada) {
        if (email == emailDigitado && senha == senhaDigitada) {
            cout << "Login realizado com sucesso!" << endl;
        } else {
            cout << "E-mail ou senha incorretos!" << endl;
        }
    }

    // Método para editar perfil
    void editarPerfil(string novoNome, string novoCargo) {
        nome = novoNome;
        cargo = novoCargo;

        cout << "Perfil atualizado com sucesso!" << endl;
    }

    // Método para criar quadro
    void criarQuadro(string nomeQuadro) {
        cout << "Quadro '" << nomeQuadro << "' criado com sucesso!" << endl;
    }

    // Método para participar de quadro
    void participarQuadro(string nomeQuadro) {
        cout << nome << " entrou no quadro '" << nomeQuadro << "'" << endl;
    }

    // Método para exibir informações
    void exibirInformacoes() {
        cout << "\n=== DADOS DO USUARIO ===" << endl;
        cout << "Nome: " << nome << endl;
        cout << "E-mail: " << email << endl;
        cout << "Cargo: " << cargo << endl;
    }
};

// Programa principal
int main() {

    // Criando objeto
    Usuario usuario1(
        "Ananda",
        "ananda@email.com",
        "123456",
        "Administrador"
    );

    // Exibindo dados
    usuario1.exibirInformacoes();

    // Fazendo login
    usuario1.fazerLogin(
        "ananda@email.com",
        "123456"
    );

    // Editando perfil
    usuario1.editarPerfil(
        "Nanda",
        "Gerente"
    );

    // Criando quadro
    usuario1.criarQuadro(
        "Projeto Kanban"
    );

    // Participando de quadro
    usuario1.participarQuadro(
        "Projeto Kanban"
    );

    // Exibindo dados atualizados
    usuario1.exibirInformacoes();

    return 0;
}
