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
    int numero;
    bool checa = true;
    cout<<"Digite um numero inteiro não negativo ou 0 para sair:";
    cin>>numero;
    if(numero > 0)
    {
        for(int i = numero-1; i > 1; i--)
            if(numero%i == 0)
            {
                checa = false;
                break;
            }
        if(checa)
            cout<<numero<<" é um numero primo\n";
        else
            cout<<numero<<" não é um numero primo\n";
        main();

    }
    else if(numero < 0)
    {
        cout<<"Valor de entrada inválido\n";
        main();
    }
    return 0;
}
