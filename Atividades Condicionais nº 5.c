/*
   Atividade 5: Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.
   POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("Este numero eh PAR\n", num);
    }
    else
    {
        printf("Este numero eh IMPAR\n", num);
    }
    return 0;
}
