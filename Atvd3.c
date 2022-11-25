/*
  Atividade 3: Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de
               retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.
  POR LUÍS H.
*/
#include <stdio.h>

int numPositivo(int num);
int numNegativo(int num);
int numIgualZero(int num);
int main()
{
    int num;
    printf("Digite um numero qualquer: ");
    scanf("%d", &num);

    numPositivo(num);

    numNegativo(num);

    numIgualZero(num);
}

int numPositivo(int num)
{
    if(num > 0)
    {
        printf("Numero positivo\n", num);
    }
    return 1;
}

int numNegativo(int num)
{
    if(num < 0)
    {
        printf("Numero negativo\n", num);
    }
    return -1;
}

int numIgualZero(int num)
{
    if(num == 0)
    {
        printf("Numero igual a zero\n", num);
    }
    return 0;
}
