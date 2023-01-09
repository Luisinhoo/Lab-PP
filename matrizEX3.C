/*
   Atividade 3 de MATRIZES: Leia uma matriz 4 × 4, imprima a matriz e retorne a localização (linha e a coluna) do maior
                            valor.
   POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4][4];
    int maior = 0;
    int L = 0; //linha
    int C = 0; //coluna
    int i, j;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Digite o valor da linha %d da %dº coluna: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);

            if(mat[i][j] > maior)
            {
                maior = mat[i][j];
                L = i;
                C = j;
            }
        }
    }

    printf("Maior: %d\n", maior);
    printf("\n");
    printf("Linha: %d\n", L);
    printf("\n");
    printf("Coluna: %d\n", C);
    return 0;
}
