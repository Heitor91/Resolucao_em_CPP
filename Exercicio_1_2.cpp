#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int entrada;
    int somatorio=0;
    cout<<"Digite um n�mero inteiro positivo ou 0 para sair:";
    cin>>entrada;
    if(entrada > 0)
    {
        for(int i=1; i<=entrada; i++)
            somatorio += i;
        cout<<"A somat�ria de "<<entrada<<" �: "<<somatorio<<"\n";
        main();
    }
    else if(entrada == 0)
        return 0;
    else
    {
        cout<<"Valor de entrada inv�lido\n";
        main();
    }
    return 0;
}
