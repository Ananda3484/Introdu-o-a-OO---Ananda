#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> numeros;

    //inserir no final
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    //inserir no início
    numeros.push_front(5);

    //imprimir a lista
    cout << "Elementos da lista: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    //Remover um elemento (pelo value)
    numeros.remove(20);
    cout << "Após remover 20: "; 
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
