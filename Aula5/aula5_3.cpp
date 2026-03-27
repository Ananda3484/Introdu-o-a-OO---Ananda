#include <iostream>
using namespace std;

int main()
{
    bool porta;
    cout << "Digite se a porta esta aberta (1 sim 0 nao): ";
    cin >> porta;

    if (porta)
        {
            cout << "A porta esta aberta, favor fechar e ligar o ar-condicionado";
        }
    else
        {
            cout << "Ligar ar-condicionado";
        }

    return 0;
}