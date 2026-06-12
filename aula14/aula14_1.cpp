#include <iostream>
using namespace std;

class Energia {
    public:
        void ligar() {
            cout <<"Sistema de energia ligado." << endl;
        }
        void desligar () {
            cout <<"Sistema de energia desligado." << endl;
        }
};

class Seguranca {
    public:
        void monitorar() {
            cout << "Sistema de seguranca monitorando a resindencia" << endl;
        }

        void status () {
            cout << "Status de seguranca : ativa." << endl;
        }
};

class CasaInteligente : public Energia, public Seguranca {
    public:
        void status() {
            cout << "Casa inteligente funcionando normalmente." << endl;
        }
};

int main() {
    CasaInteligente casa;

    casa.status(); //metodo da casainteligente
    casa.Seguranca::status();// metodo da classe seguranca
    casa.ligar();//metodo da classe energia
    casa.monitorar();//metodo de classe seguranca

    return 0;
}
