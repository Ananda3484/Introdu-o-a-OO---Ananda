//aula sobre funcoes
#include <iostream>
using namespace std;
void menu()
{
    cout << "Que período do dia está: " << endl;
    cout << "1- Manhã" << endl;
    cout << "2- Tarde" << endl;
    cout << "3- Noite" << endl;
}

void boas_vindas()
{
    int op;
    cin >> op;

    if (op == 1)
    {
        cout << "Bom dia!" << endl;
    }
    else if (op == 2)
    {
        cout << "Boa tarde!" << endl;
    }
    else if (op == 3)
    {
        cout << "Boa noite!" << endl;
    }
    else
    {
        cout << "Opção inválida!" << endl;
    }
}
int main() {
    menu();
    boas_vindas();
    return 0;
}