/*
   Atividade 4:  Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
                        -> O número digitado ao quadrado
                        -> A raiz quadrada do número digitado
   POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num; //número
    float num2; //armazenar o valor do quadrado do número digitado se for positivo

    printf("Digite um numero qualquer: ");
    scanf("%f", &num);

    if(num > 0)
    {
        num2 = num * num;
        printf("Ao quadrado eh: %.2f\n", num2);

        num = sqrt(num);
        printf("Raiz quadrada eh: %.2f\n", num);
    }
    else
    {
        printf("Este numero nao eh positivo\n", num);
    }
    return 0;
}
