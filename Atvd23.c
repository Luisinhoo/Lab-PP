/*
    Atividade 23: OBS: NO LAB ESTÁ COMO EXERCICIO 24.
                  Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exemplo, a
                  saída para n = 6 seria:
                           *
                          ***
                         *****
                        *******
                       *********
                      ***********
   POR LUÍS H.
*/
#include <stdio.h>

void AuturaELados(int n);

void main()
{
    int n;

    printf("Digite o valor de n ");
    scanf("%d", &n);

    AuturaELados(n);
    return 0;
}

void AuturaELados(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
