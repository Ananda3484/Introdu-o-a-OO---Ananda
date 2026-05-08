#include <iostream>
#include <stack> // Inclui a biblioteca de pilha
using namespace std;

int main(){
    stack<int> pilha; // Cria uma pilha de inteiros

    // Adiciona elementos à pilha
    pilha.push(10);
    pilha.push(20);
    pilha.push(30);

    // Exibe o elemento no topo da pilha
    cout << "Topo da pilha: " << pilha.top() << endl;

    // Remove o elemento do topo da pilha
    pilha.pop();

    // Exibe o novo elemento no topo da pilha
    cout << "Topo da pilha após pop: " << pilha.top() << endl;

    return 0;
}