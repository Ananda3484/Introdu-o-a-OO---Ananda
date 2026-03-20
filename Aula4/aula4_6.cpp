#include <iostream>
using namespace std;

int main(){
    int n1;
    int n2 = 50, n3, x = 3, y = 4, i = 50;

    x += 3;
    x *= y + 1;
    x *= y++;

    y = i++;
    y = ++i;

    cout << "entre com um numero inteiro (n1):  ";
    cin >> n1;

    n1 += n1 * 10;
    n2 = n1 / 5;
    n3 = n2 % 5 * 7;
    n2 *= n3-- % 4;

    // desafio de mostrar os valores das variáveis antes da saída original
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
    cout << "n3 = " << n3 << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "i = " << i << endl;

    cout << n2 << " " << n3 << " " << (n2 != n3 + 21) << endl;

    return 0;
}