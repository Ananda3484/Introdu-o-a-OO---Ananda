#include <iostream>
using namespace std;

int main() {
    int bebida, comida;
    float total = 0;

    cout << "=== CAFETERIA DA NANDA ? ===\n";
    cout << "Escolha sua bebida:\n";
    cout << "1 - Cafe\n";
    cout << "2 - Chocolate quente\n";
    cout << "3 - Cha\n";
    cin >> bebida;

    switch (bebida) {
        case 1:
            cout << "\nCafe escolhido ?\n";
            total += 5;

            cout << "Escolha um acompanhamento:\n";
            cout << "1 - Pao de queijo\n";
            cout << "2 - Bolo\n";
            cin >> comida;

            switch (comida) {
                case 1:
                    cout << "Pao de queijo escolhido ??\n";
                    total += 6;
                    break;
                case 2:
                    cout << "Bolo escolhido ??\n";
                    total += 7;
                    break;
                default:
                    cout << "Opcao invalida\n";
            }
            break;

        case 2:
            cout << "\nChocolate quente escolhido ??\n";
            total += 8;

            cout << "Escolha um acompanhamento:\n";
            cout << "1 - Cookies\n";
            cout << "2 - Croissant\n";
            cin >> comida;

            switch (comida) {
                case 1:
                    cout << "Cookies escolhidos ??\n";
                    total += 5;
                    break;
                case 2:
                    cout << "Croissant escolhido ??\n";
                    total += 9;
                    break;
                default:
                    cout << "Opcao invalida\n";
            }
            break;

        case 3:
            cout << "\nCha escolhido ??\n";
            total += 4;

            cout << "Escolha um acompanhamento:\n";
            cout << "1 - Torrada\n";
            cout << "2 - Muffin\n";
            cin >> comida;

            switch (comida) {
                case 1:
                    cout << "Torrada escolhida ??\n";
                    total += 3;
                    break;
                case 2:
                    cout << "Muffin escolhido ??\n";
                    total += 6;
                    break;
                default:
                    cout << "Opcao invalida\n";
            }
            break;

        default:
            cout << "Opcao invalida\n";
    }

    cout << "\nTotal a pagar: R$ " << total << endl;

    return 0;
}