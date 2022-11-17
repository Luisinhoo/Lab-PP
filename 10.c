/*
   Atividade 10: Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
   POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int num;
    int numpar;
    int contador;
    int i;
    int soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    numpar = num % 2;
    contador = 50;

    for(i = 0; num < 50; i++)
    {
        soma = numpar * contador;
        printf("%d\n", numpar);
    }
    return 0;
}
