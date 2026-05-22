#include <iostream>
using namespace std;

// Classe base
class Streaming {
public:
    virtual void abrirApp() {
        cout << "Abrindo streaming..." << endl;
    }
};

// Classe Netflix
class Netflix : public Streaming {
public:
    void abrirApp() {
        cout << "Netflix aberta: bora maratonar." << endl;
    }
};

// Classe Spotify
class Spotify : public Streaming {
public:
    void abrirApp() {
        cout << "Spotify aberto: soltando playlist triste." << endl;
    }
};

int main() {

    Netflix n;
    Spotify s;

    n.abrirApp();
    s.abrirApp();

    return 0;
}