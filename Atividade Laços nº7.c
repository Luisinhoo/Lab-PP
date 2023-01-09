/*
  Atividade 7: Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
               média.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int num;
    int i;
    int media;

    for (i = 0; i < 10; i++)
        {
            printf("Digite o %d numero: ", i + 1);
            scanf("%d", &num);
            media += num / 2;
        }
    printf("Media = %d\n", media);

}
