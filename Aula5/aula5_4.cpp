#include <iostream>
using namespace std;

int main()
{
    float n1=0, n2=0, media=0;
    int faltas=0, idade=0;
    bool aprova, emancipado;

    cout << "Digite qtd faltas: ";
    cin >> faltas;

    cout << "Digite a Nota 1: ";
    cin >> n1;

    cout << "Digite a Nota 2: ";
    cin >> n2;

    media = (n1 + n2)/2;

    if ((faltas < 180) && (media >= 6)) {
        cout << "Aprovado\n";
    }
    else {
        if (faltas >= 180){
            cout << "Reprovado\n";
        }
        else {
            cout << "Aprova conselho (0 nao 1 sim): ";
            cin >> aprova;

            if (!aprova){
                cout << "Reprovado por conselho de classe\n";
            }
            else {
                cout << "Aluno Aprovado\n";
            }
        }
    }

    cout << "Digite a idade: ";
    cin >> idade;

    cout << "Digite se for emancipado (1 sim 0 nao): ";
    cin >> emancipado;

    if ((idade >= 18) || (emancipado)) {
        cout << "Voce pode retirar o boletim\n";
    }
    else {
        cout << "Os responsaveis devem retirar o boletim\n";
    }

    if (idade >= 18) {
        cout << "A partir deste mes o boleto segue em seu nome...\n";
    }

    return 0;
}