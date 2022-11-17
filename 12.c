/*
  Atividade 12: Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
                desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int num = 0;
    int soma = 0;
    int i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for(i = 1; i < num; i++)
    {
        while(soma <= num)
        {
            if(num % i == 0)
            {
                soma += i;
            }
            i++;
        }
    }
    printf("%d\n", soma, i);
    return 0;
}
