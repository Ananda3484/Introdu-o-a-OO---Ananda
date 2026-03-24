#include <iostream>
using namespace std;    
int main(){
    float n1=0, n2=0, media=0;
    int faltas=0;
    cout << "Digita a quantidade de faltas: ";
    cin >> faltas;
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    media = (n1 + n2) / 2;
    if (faltas > 180){
        cout << "Aluno Reprovado por faltas!";}
    else {
        if (media >= 6){
            cout << "Aluno Aprovado: "; }
        else {
            cout << "Aluno Reprovado por media!";
        }
    }
    return 0;
}