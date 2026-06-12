// camada de apresentacao - 1 - Front end
#include <iostream>
#include "matematica.h"
#include "fisica.h"
using namespace std;

int main() {

    int opcao;
    do {
        cout << "\n ====== FORMULAS CONCURSOS ======\n"
        cout << "1 - Matematica\n";
        cout << "2 - Fisica\n";
        cout << "0 - sair\n";

        cout << "escolha: ";
        cin >> opcao;

        Formula* formula = nullptr;

        switch (opcao) {
            case 1:
                formula = new Matematica();
                break;
            case 2:
                forula = new fisica();
                break;
            case 0:
                cout << "Encerrando...\n";
                break;
            default:
                cout << "opcao invalida!\n"; 
        }
        if (formula != nullptr) {
            formula->calcular();
            delete formula;
        }
    } while(opcao != 0);

    return 0;
}