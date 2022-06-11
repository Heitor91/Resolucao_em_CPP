#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int entrada = 1;
    while(entrada != 0)
    {
        cout<<"Digite um numero inteiro ou 0 para sair:";
        cin>>entrada;
        if(entrada != 0)
        {
            int quadrado = entrada * entrada;
            cout<<"O quadrado de "<<entrada<<" é: "<<quadrado<<"\n";
        }
    }
    return 0;
}
