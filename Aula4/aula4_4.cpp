#include <iostream>
using namespace std;
int main(){
    int k = 10,  j = 10;

    //pré fixado //incremento
    cout << "antes do pré fixado: " << k << endl;
    cout << "durante do pré fixado: " << ++k << endl;
    cout << "depois do pré fixado: " << k << endl;

    //pós fixado //incremento
    cout << "antes do pós fixado: " << j << endl;
    cout << "durante do pós fixado: " << j++ <<
    "primeiro imprime o valor depois soma\n";
    cout << "depois do pós fixado: " << j << endl;
    return 0;
}