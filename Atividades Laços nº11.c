/*
  Atividade 11: Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int N;
    int i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
