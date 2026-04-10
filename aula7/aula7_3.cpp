#include <iostream>
#include <string>
using namespace std;

//criação de classe da classe
class TrataDivZero
{
    public:
        TrataDivZero (int n);
        void Msg();
    private:
        int NLinha;
};

//Criação do objeto
TrataDivZero::TrataDivZero (int n)
{
    NLinha = n;
}

void TrataDivZero::Msg()
{
    cout << "Tratador de erro foi chamado ..." << endl;
    cout << "Erro na linha:  " << NLinha << endl;
}

int main()
{
    int n, m;
    cout << "Numerador: ";
    cin >> n;
    cout << "Denominador: ";
    cin >> m;

    try // inicio do bloco TRY
    {
        if (m == 0)
        {
            //Lança a exceção, criando um objeto da classe TrataDivZero
            // e passando o número da linha onde ocorreu o erro
            throw (TrataDivZero(__LINE__));
            //dentro deste bloco nada é executado após o lançamento da exceção
        }
        cout << "Divisão: " << (double)n/m << endl;
    }
    catch (TrataDivZero T) // pode ter ou nao o objeto
    {                      // apenas o tipo é obrigatório
        T.Msg();
    }

    catch (bad_alloc E) 
    {
        cout << "Faltou memoria...\n" << endl;
    } // aqui o objeto T não existe mais!!

    cout << "Fim" << endl;
    system("pause");
    return 0;
}