#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int primeiroNumero, segundoNumero, memoria;
    cout<<"Digite o primeiro numero positivo ou 0 para sair: ";
    cin>>primeiroNumero;
    if(primeiroNumero > 0)
    {
        cout<<"Digite o segundo numero positivo: ";
        cin>>segundoNumero;
        if(segundoNumero > 0)
        {
            while(segundoNumero != 0)
            {
                if(segundoNumero > primeiroNumero)
                {
                    memoria = primeiroNumero;
                    primeiroNumero = segundoNumero;
                    segundoNumero = memoria;
                }
                if(segundoNumero != 0)
                    primeiroNumero = primeiroNumero%segundoNumero;
            }
            cout<<"O menor divisor comum é: "<<segundoNumero<<"/n";
        }
        else
            cout<<"Valor de entrada inválido\n";
        main();

    }
    else if(primeiroNumero < 0)
    {
        cout<<"Valor de entrada inválido\n";
        main();
    }
    return 0;
}
