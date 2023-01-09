/*
   Atividade 5 de MATRIZES: Gerar e imprimir uma matriz de tamanho 10 × 10, onde seus elementos são da forma:
                                  A[i][j] = 2i + 7j - 2 se i < j;
                                  A[i][j] = 3i² -1 se i = j;
                                  A[i][j] = 4i³– 5j² + 1 se i > j;
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[10][10];
    int i, j;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            //A[i][j] = 2i + 7j - 2 se i < j;
            if(i < j)
            {
                mat[i][j] = 2 * i + 7 * j - 2;
            }

            //A[i][j] = 3i² -1 se i = j;
            else if(i == j)
            {
                mat[i][j] = 3 * i * i - 1;
            }

            //A[i][j] = 4i³– 5j² + 1 se i > j;
            else
            {
                mat[i][j] = 4 * i * i * i - 5 * j * j + 1;
            }
        }
     }
     for(i = 0; i < 10; i++)
     {
         for(j = 0; j < 10; j++)
         {
             printf("%d ", mat[i][j]);
         }
         printf("\n");
     }
     return 0;
}
