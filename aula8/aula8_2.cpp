#include <iostream>
using namespace std;    

void menu() {
    cout << "1-Bermuda" << endl;
    cout << "2-Camisa" << endl;
    cout << "DIGITE A OPCAO DESEJADA: " << endl;
}

int valores(int op){
    int valor;
    switch (op) {
        case 1:
            valor =20.00;
            break;
        case 2:
            valor = 100;
            break;
        default:
            cout << "OPCAO INVALIDA!" << endl;
            break;
    }
    return valor;
}

int main() {
    int op, qtd;
    int valor_individual, valor_total;
    menu();
    cin >> op;
    cout << "Digite a quantidade: " << endl;
    cin >> qtd;
    valor_individual = valores(op);
    valor_total = valor_individual * qtd;
    cout << "O valor individual do produto e: " << valor_individual << endl;
    cout << "O valor total da compra e: " << valor_total << endl;
    return 0;
}