//CAMADA DE NEGOCIO - 3 
#include <iostream> // biblioteca para entrada e saida de dados
#include "fisica.h" //Inclui o cabeçalho da classe Fisica
using namespace std; // Evita escrever std:: antes de cin

//implementação do método calcular () da classe Fisica
void Fisica::calcular() {

    //Declaração das variaveis do tipo double
    // ultilizadas para armazenar valores decimais
    double forca, massa, aceleracao;

    cout << "\n=== SEGUNDA LEI DE NEWTON ===\n";

    cout << "Digite a massa: ";
    cin >> massa;

    cout << "Digite a aceleração: ";
    cin >> aceleracao;

    forca = massa * aceleracao;

    cout << "Força Resultante: " << forca << " N" << endl;
}