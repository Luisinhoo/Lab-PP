/*
  Atividade 9: Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
               naturais ímpares
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int N = 0;
    int numImpar;
    int i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    numImpar = N + 1 + (N % 2);

    for(i = 0; i < N; i++)
    {
        numImpar += 2;
        printf("Impares: %d\n", numImpar);
    }
    return 0;
}
