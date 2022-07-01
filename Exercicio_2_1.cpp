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
    int repeticoes, numero = 1;
    bool checa = true;
    system("cls");
    cout<<"Digite uma quantidade de sequências a serem verificadas ou 0 para sair:";
    cin>>repeticoes;
    if(repeticoes > 0)
    {
        int somas[repeticoes];
        for(int i = 0; i < repeticoes; i++)
        {
            cout<<"Números da "<<i+1<<"ª sequência \n";
            somas[i] = 0;
            while(numero != 0)
            {
                cout<<"Digite um numero inteiro ou 0 para terminar essa sequencia: ";
                cin>>numero;
                if(numero%2 == 0 && numero != 0)
                    somas[i] += numero;
            }
            numero = 1;
            system("cls");
        }
        for(int i = 0; i < repeticoes; i++)
            cout<<"Soma dos pares da "<<i+1<<"ª sequência: "<<somas[i]<<"\n";
        system("pause");
        main();
    }
    else if(repeticoes < 0)
    {
        cout<<"Valor inserido é inválido \n";
        system("pause");
        main();
    }
    return 0;
}
