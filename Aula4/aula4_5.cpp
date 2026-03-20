#include <iostream>
using namespace std;

int main(){
    int k = 10,  j = 10;

    //para somar
    k = k + 1;
    cout << "O valor de k alterado: " << k << endl;
    //para subtrair
    j = j - 1;
    cout << "O valor de j alterado para " << j << endl;

   //mas também pode ser - incremento pós fixado
   k++;
   cout << "O valor de k alterado para " << k << endl; 

   //decremento pós fixado
    j--;
    cout << "O valor de j alterado para " << j << endl;

    //e tambem pode ser - incremento pré fixado
    ++k;
    cout << "O valor de k alterado para " << k << endl;

    //decremento pré fixado
    --j;
    cout << "O valor de j alterado para " << j << endl;

   return 0;
}