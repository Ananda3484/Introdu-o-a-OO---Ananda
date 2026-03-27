#include <iostream>
using namespace std;

int main() 
{
    char tamanho;
    float imc;
    cout << "Digite seu IMC";
    cin >> imc;
    cout << "Digite o tamanho: (P/M/G)";
    cin >> tamanho;

    switch (tamanho)
    {
        case 'P':
            cout << "pequeno";
            if ((imc >= 18) && (imc <=24))
            {
                cout << "para este imc sugiro tamanho M";
            }
            break;

        case 'M':
            cout << "medio";
            if ((imc >= 18) && (imc <=24))
            {
                cout << "para este imc sugiro tamanho M";
            }
            break;

        case 'G':
            cout << "grande";
            if ((imc >= 18) && (imc <=24))
            {
                cout << "para este imc sugiro tamanho M";
            }
            break;

        default:
            cout << "tamanho invalido";
    }

    return 0;
}