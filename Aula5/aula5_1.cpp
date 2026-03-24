// aula 5 exercicio 1 
#include <iostream>
using namespace std;
int main(){
    float n1, n2, media=0;
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    media = (n1 + n2) / 2;
    if (media >= 6){
        cout << "Aluno Aprovado: " << media << endl;
    } else {
        cout << "Aluno Reprovado!";
    }
    return 0;
}