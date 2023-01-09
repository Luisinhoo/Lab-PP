/*
  Atividade 16: Faça um programa que apresente um menu de opções para o cálculo das seguintes operações entre dois números:
                       -> Adição (opção 1)
                       -> Subtração (opção 2)
                       -> Multiplicação (opção 3)
                       -> Divisão (opção 4).
                       -> Saída (opção 5)
                O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado
                e a volta ao menu de opções. O programa só termina quando for escolhida a opção de saída(opção 5).
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    int num1;
    int num2;

    do
    {
        printf("ADICAO        (OPCAO 1)\n");
        printf("SUBTRACAO     (OPCAO 2)\n");
        printf("MULTIPLICACAO (OPCAO 3)\n");
        printf("DIVISAO       (OPCAO 4)\n");
        printf("SAIDA          (OPCAO 5)\n");

        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        if(opcao > 1 && opcao < 5)
            {
               printf("Digite dois valores: ");
               scanf("%d%d",&num1, &num2);
            }

        switch(opcao)
        {
           case 1:
                   printf("Soma: %d\n", num1 + num2);
                   break;
           case 2:
                   printf("Subtracao: %d\n", num1 - num2);
                   break;
           case 3:
                   printf("Multiplicacao: %d\n", num1 * num2);
                   break;
           case 4:
                   while(num2 == 0)
                   {
                      printf("Nao existe divisao por zero!\n");
                      printf("Digite outro valor: ");
                      scanf("%d", &num2);
                   }
                   printf("Divisao: %d\n", num1 / num2);
                   break;
           case 5:
                   printf("Saindo\n");
                   break;
           default:
                   printf("Opcao inválida!\n");
                   printf("Digite outra opcao: ");
        }
    } while(opcao != 0);
}

