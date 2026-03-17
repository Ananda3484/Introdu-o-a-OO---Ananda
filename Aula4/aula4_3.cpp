//string com a biblioteca string e metodos 
#include <iostream>
#include <string>
using namespace std;

int main () {
   string nome = "Ananda";
   string letra = "a";
   string sobrenome = " santos";

   cout << "meu nome é : " << nome << endl;

   // metodo appen para juntar strings 
   cout << "nome completo : " << nome.append(sobrenome) << endl;
   
   // metodo length para contar o tamanho da string 
   cout << "tamanho: " << nome.length() << endl; 
   
   // metodo size tambem da certo o nome.size()
   cout <<"\nPrimeira letra do nome: " << nome[0]; // acessando a primeira letra do nome usando o indice 0 
   nome[0] = 'b'; // alterando a primeira letra do nome para minuscula
   cout << "meu nome agora é : " << nome << endl; 

   return 0;
}