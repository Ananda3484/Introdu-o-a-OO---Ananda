#include <iostream>
using namespace std;

int main()
{
    int dia_semana;
    cout << "Digite o dia da semana: ";
    cin >> dia_semana;

    switch (dia_semana) {
        case 1:
            cout << "domingo";
            break;
        case 2:
            cout << "segunda";
            break;
        case 3:
            cout << "terca";
            break;
        case 4:
            cout << "quarta";
            break;
        case 5:
            cout << "quinta";
            break;
        case 6:
            cout << "sexta";
            break;
        case 7:
            cout << "sabado";
            break;
        default:
            cout << "Dia invalido";
    }

    return 0;
}