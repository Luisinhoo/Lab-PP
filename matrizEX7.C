/*
   Atividade 7 de MATRIZES: Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de
                            bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de
                            modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a
                            cartela gerada.
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[5][5];
    int i, j, k;
    int valor;
    int existe;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            do
            {
                valor = rand() % 100;
                existe = 0;

                for(k = 0; k < j; k++)
                {
                    if(mat[i][k] == valor)
                    {
                        existe = 1;
                    }
                }
                for(k = 0; k < i; k++)
                {
                    if(mat[k][j] == valor)
                    {
                        existe = 1;
                    }
                }
            }

            while(existe);
            {
                mat[i][j] = valor;
            }
        }

        for(i = 0; i < 5; i++)
        {
            for(j = 0; j < 5; j++)
            {
                printf("%d ", mat[i][j]);
            }

            printf("\n");
        }
    }
    return 0;
}
