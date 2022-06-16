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
    int base, expoente;
    cout<<"Digite um expoente inteiro não negativo ou 0 para sair:";
    cin>>expoente;
    if(expoente > 0)
    {
        cout<<"Digite um numero inteiro como base:";
        cin>>base;
        cout<<base<<"^"<<expoente<<"= "<< pow(base, expoente)<<"\n";
        main();
    }
    else if(expoente < 0)
    {
        cout<<"Valor de entrada inválido\n";
        main();
    }
    return 0;
}
