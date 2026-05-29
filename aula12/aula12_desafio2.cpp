#include <iostream>
#include <cmath>

using namespace std;

// Classe abstrata
class Forma {
public:
    virtual double area() = 0;

    virtual ~Forma() {}
};

// Classe Retangulo
class Retangulo : public Forma {
private:
    double largura;
    double altura;

public:
    Retangulo(double l, double a) {
        largura = l;
        altura = a;
    }

    double area() override {
        return largura * altura;
    }
};

// Classe Circulo
class Circulo : public Forma {
private:
    double raio;

public:
    Circulo(double r) {
        raio = r;
    }

    double area() override {
        return 3.14159 * raio * raio;
    }
};

int main() {

    double largura, altura, raio;

    cout << "Digite a largura do retangulo: ";
    cin >> largura;

    cout << "Digite a altura do retangulo: ";
    cin >> altura;

    cout << "Digite o raio do circulo: ";
    cin >> raio;

    Retangulo ret(largura, altura);
    Circulo circ(raio);

    cout << "\nArea do Retangulo: " << ret.area() << endl;
    cout << "Area do Circulo: " << circ.area() << endl;

    cout << "Soma das areas: " << ret.area() + circ.area() << endl;

    return 0;
}