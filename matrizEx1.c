/*
  Atividade 1 de MATRIZES: Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui.
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4][4];
    int contador = 0;
    int i, j;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Digite o valor da linha %d da %dº coluna: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);

            if(mat[i][j] > 10)
            {
                contador++;
            }
        }
    }
    printf("%d destes valores sao maiores que 10\n", contador);
    return 0;
}
