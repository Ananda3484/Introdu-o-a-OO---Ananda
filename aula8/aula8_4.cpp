#include <iostream>
using namespace std;
int main() {
    int vetor [5]; //declara um vetor de 5 posicoes
    int matriz [5][3]; //declara uma matriz de 5 linhas e 3 colunas

    vetor [0] = 9; //coloca 9 na primeira posicao do vetor
    vetor [4] = 30; //coloca 30 na ultima posicao do vetor

    matriz [0][1] = 15; //coloca 15 na primeira linha e segunda coluna da matriz

    cout << "o vetor na posição 0 tem valor " << vetor[0];
    return 0;
}
