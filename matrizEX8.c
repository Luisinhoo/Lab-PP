/*
   Atividade 8 de MATRIZES:  Faça um programa que leia duas matrizes 2 × 2 com valores reais. Ofereça ao usuário um
                             menu de opções:
                                            a) somar as duas matrizes
                                            b) subtrair a primeira matriz da segunda
                                            c) adicionar uma constante às duas matrizes
                                            d) imprimir as matrizes
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[2][2];
    int B[2][2];
    int op;
    int constante;
    int i, j;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Digite o %dº valor da matriz A: ", i * 2 + j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Digite o %dº valor da matriz B: ", i * 2 + j + 1);
            scanf("%d", &B[i][j]);
        }
    }
    printf("OPCOES: \n");
    printf("a - Somar as duas matrizes\n");
    printf("b - Subtrair a primeira matriz da segunda\n");
    printf("c - Adicionar uma constante as duas matrizes\n");
    printf("d - Imprimir as matrizes\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &op);

    switch(op)
    {
        case 1:
               for(i = 0; i < 2; i++)
               {
                   for(j = 0; j < 2; j++)
                   {
                       printf("%d ", A[i][j] + B[i][j]);
                   }
                   printf("\n");
               }
               break;

       case 2:
               for(i = 0; i < 2; i++)
               {
                   for(j = 0; j < 2; j++)
                   {
                       printf("%d ", A[i][j] - B[i][j]);
                   }
                   printf("\n");
               }
               break;

       case 3:
               printf("Digite a constante: ");
               scanf("%d", &constante);

               for(i = 0; i < 2; i++)
               {
                   for(j = 0; j < 2; j++)
                   {
                       printf("%d ", A[i][j] + constante);
                   }
                   printf("\n");
               }
               for(i = 0; i < 2; i++)
               {
                   for(j = 0; j < 2; j++)
                   {
                       printf("%d ", B[i][j] + constante);
                   }
                   printf("\n");
               }
               break;

       case 4:
              for(i = 0; i < 2; i++)
              {
                  for(j = 0; j < 2; j++)
                  {
                      printf("%d ", A[i][j]);
                  }
                  printf("\n");
              }

              for(i = 0; i < 2; i++)
              {
                  for(j = 0; j < 2; j++)
                  {
                      printf("%d ", B[i][j]);
                  }
                  printf("\n");
              }
              break;

      default:
              printf("Opção inválida!\n");
              break;
    }
    return 0;
}
