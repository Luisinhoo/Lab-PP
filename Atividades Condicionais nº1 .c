/*
   Atividade 1: Faça um programa que receba dois números e mostre qual deles é o maior.
   POR LUÍS H.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1; //número 1
    float num2; //número 2

    printf("Digite um numero qualquer: ");
    scanf("%f", &num1);

    printf("Agora digite um outro numero qualquer: ");
    scanf("%f", &num2);

    if(num1 > num2)
    {
        printf("%.f eh MAIOR que %.f\n", num1, num2);
    }
    else
    {
        printf("%.f eh MAIOR que %.f\n", num2, num1);
    }

    return 0;
}
