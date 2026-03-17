//String sem a biblioteca string
#include <iostream>
using namespace std;

int main () {
   char nome[7] = {'A', 'n', 'a', 'n', 'd', 'a', '\0'}; // O caractere nulo '\0' indica o final da string
   cout << "meu nome é: ";
   cout << nome << endl; 
   return 0;
}