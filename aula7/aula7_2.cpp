#include <iostream>
#include <stdexcept>
using namespace std;

double dividir(double numerador, double denominador) {
    //if (denominador == 0) {
      //  throw runtime_error("Erro: Divisao por zero nao permitida.");
   // }
    return numerador / denominador;
}

int main() {
    double n1, n2, resultado;

    try {
        cout << "--- Programa de Divisao Segura ---" << endl;
        cout << "Digite o numerador: ";
        cin >> n1;

        cout << "Digite o denominador: ";
        cin >> n2;

        cout << "Realizando a divisao..." << endl;

        resultado = dividir(n1, n2);

        cout << "Resultado: " << resultado << endl;
    }
    catch (const runtime_error& xx) {
        cerr << "Erro capturado: " << xx.what() << endl;
    }

    cout << "Execucao do bloco de divisao finalizada." << endl;

     return 0;
}