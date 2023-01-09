/*
  Atividade 8: Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int num;
    int guardarMaior;
    int guardarMenor;
    int i;

    guardarMenor = num;
    guardarMaior = num;

    for(i = 0; i < 10; i++)
    {
        printf("Digite o %dº numero inteiro: ", i + 1);
        scanf("%d", &num);

        if(num > guardarMaior)
        {
            guardarMaior = num;
        }

        else if(num < guardarMenor)
        {
            guardarMenor = num;
        }
    }

    printf("O MAIOR numero digitado eh: %d\n", guardarMaior);
    printf("O MENOR numero digitado eh: %d\n", guardarMenor);
    return 0;
}
