#include <iostream>
using namespace std;

int main(){
    int moradia1 = 1; // 1 = casa
    int moradia2 = 2; // 2 = apartamento
    int temp;

    cout << "Antes:\n";
    cout << "Pessoa A mora em: " << moradia1 << endl;
    cout << "Pessoa B mora em: " << moradia2 << endl;

    cout << "\nTrocando moradias...\n";

    temp = moradia1;
    moradia1 = moradia2;
    moradia2 = temp;

    cout << "\nDepois:\n";
    cout << "Pessoa A agora mora em: " << moradia1 << endl;
    cout << "Pessoa B agora mora em: " << moradia2 << endl;

    return 0;
}