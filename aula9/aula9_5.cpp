#include <iostream>
#include <queue>
using namespace std;

int main (){
    queue<string> fila;

    fila.push("Joao");
    fila.push("Maria");
    fila.push("Carlos");

    cout << "Primeira pessoa da fila: " << fila.front() << endl;

    fila.pop();

    cout << "Primeira pessoa da fila: " << fila.front() << endl;

    return 0;
}