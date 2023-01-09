/*
  Atividade 5: Faça um programa que peça ao usuário para digitar 10 valores e some-os.
  POR LUÍS H.
*/

#include <stdio.h>

int main()
{
    int soma = 0;
    int num;
    int i;

    for (i = 0; i < 10; i++)
        {
            printf("Digite o %d numero: ", i + 1);
            scanf("%d", &num);
            soma += num;
        }
    printf("Soma = %d\n", soma);
}
