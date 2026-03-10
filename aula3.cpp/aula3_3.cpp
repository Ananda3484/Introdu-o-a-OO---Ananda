#include <iostream>
using namespace std;

int main() {
    float num1, num2, soma; //Recebendo dados
    cout << "Digite o primeiro numero: "; //cout mostra mensagens ao usuario

    cin >> num1; // cin libera teclado e recolhe o valor digitado

    cout << "Digite o segundo numero: ";
    cin >> num2;

    //calcular a soma dos dois numeros
    soma = num1 + num2;

    //msg para mostrar o resultado
    cout << "A soma dos dois numeros é: " << soma << endl;

    return 0;
}