#include <iostream>
using namespace std;
int main(){
    char continua;
    continua='s';

    while(continua=='s'||continua=='S'){ 
        cout<<"Repetindo....\n";
        cout<<"Tecle 's' se deseja continuar ou outra tecla ";
        cout<<"para parar\n";
        cin>>continua;
    }
    return 0;
}