/*
  Atividade 4 de MATRIZES: Leia uma matriz 5 × 5. Leia também um valor X. O programa deverá fazer uma busca desse
                           valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não
                           encontrado”.
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[5][5];
    int X;
    int L = 0; //linha
    int C = 0; //coluna
    int encontrar = 0;
    int i, j;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("Digite o valor da linha %d da %dº coluna: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Digite um valor para X: ");
    scanf("%d", &X);

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(mat[i][j] == X)
            {
                L = i;
                C = j;
                encontrar = 1;
            }
        }
    }

    if(encontrar)
    {
        printf("Linha %d coluna %d\n", mat[L][C]);
    }

    else
    {
        printf("NAO ENCONTRADO\n");
    }
    return 0;
}
