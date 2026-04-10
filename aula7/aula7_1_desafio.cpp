#include <iostream>
using namespace std;

int main() {
    float lado, areaq, base, altura, arear;
    float raio, areac;
    float f, c;

    // Quadrado
    cout << "Digite o lado do quadrado (entre 1 e 50): " << endl;
    cin >> lado;

    if ((lado < 1) || (lado > 50)) {
        cout << "Valor invalido! Digite entre 1 e 50." << endl;
        return 0;
    }

    areaq = lado * lado;
    cout << "A area do quadrado e: " << areaq << endl;

    cout << "------------------------------" << endl << endl;

    // Retângulo
    cout << "Digite a base do retangulo (entre 1 e 50): ";
    cin >> base;

    if ((base < 1) || (base > 50)) {
        cout << "Valor invalido! Digite entre 1 e 50." << endl;
        return 0;
    }

    cout << "Digite a altura do retangulo (entre 1 e 50): ";
    cin >> altura;

    if ((altura < 1) || (altura > 50)) {
        cout << "Valor invalido! Digite entre 1 e 50." << endl;
        return 0;
    }

    arear = base * altura;
    cout << "A area do retangulo e: " << arear << endl;

    cout << "------------------------------" << endl << endl;

    // Círculo
    cout << "Digite o raio do circulo (entre 1 e 50): ";
    cin >> raio;

    if ((raio < 1) || (raio > 50)) {
        cout << "Valor invalido! Digite entre 1 e 50." << endl;
        return 0;
    }

    areac = 3.14 * (raio * raio);
    cout << "A area do circulo e: " << areac << endl;

    cout << "------------------------------" << endl << endl;

    // Fahrenheit para Celsius
    cout << "Digite a temperatura em Fahrenheit (entre -100 e 212): ";
    cin >> f;

    if ((f < -100) || (f > 212)) {
        cout << "Valor invalido! Digite uma temperatura entre -100 e 212." << endl;
        return 0;
    }

    c = (f - 32) * 5 / 9;
    cout << "A temperatura em Celsius e: " << c << endl;

    return 0;
}
