/*
  Atividade 1: Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.
  POR LUÍS H.
*/
#include <stdio.h>

int dobro(int num);

int main()
{
    int resultado = dobro(2);
    printf("%d\n", dobro(2));

    return 0;
}

int dobro(int num)
{
    return 2*num;
}
