#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int entrada, numero = 1;
    cout<<"Digite um n�mero inteiro positivo ou 0 para sair:";
    cin>>entrada;
    if(entrada > 0)
    {
        cout<<"Sequ�ncia de �mpares:\n";
        for(int i=1; i<=entrada; i++)
        {
            cout<<numero<<"\t";
            if(i == 10)
                cout<<"\n";
            numero+=2;
        }
        cout<<"\n";
        main();
    }
    else if(entrada < 0)
    {
        cout<<"Valor de entrada inv�lido\n";
        main();
    }
    return 0;
}
