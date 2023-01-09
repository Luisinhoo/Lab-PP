/*
  Atividade 2: Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez
               deve usar a estrutura de repetição for, a segunda while, e a terceira do-while.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int i;

    //primeira estrutura de repetição
    for(i = 1; i <= 100; i++)
    {
        printf("%d \n",i);
    }
    printf("\n");

    //segunda estrutura de repetição
    i = 1;
    while(i <= 100)
    {
        printf("%d \n",i++);
    }
    printf("\n");

    //terceira estrutura de repetição
    i = 1;
    do
       printf("%d \n",i++);

    while(i <= 100);
    return 0;
}
