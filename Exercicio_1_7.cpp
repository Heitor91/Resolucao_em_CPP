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
    int numero, sequencia, soma = 0;
    cout<<"Digite o tamanho da sequencia ou 0 para sair:";
    cin>>sequencia;
    if(sequencia > 0)
    {
        for(int i = 1; i <= sequencia; i++)
        {
            cout<<"Digite o "<<i<<"º numero: ";
            cin>>numero;
            if(numero%2 == 0)
                soma+=numero;
        }
        cout<<"A soma dos numeros pares é de:"<<soma<<"\n";
        main();
    }
    else if(sequencia < 0)
    {
        cout<<"Valor de entrada inválido\n";
        main();
    }
    return 0;
}
