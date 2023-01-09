/*
   Atividade 7: Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números
                forem iguais, imprima a mensagem: “Números iguais”
   POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1; //primeiro número
    float num2; //segundo número

    printf("Digite um numero inteiro qualquer: ");
    scanf("%f", &num1);

    printf("Agora digite outro numero inteiro qualquer: ");
    scanf("%f", &num2);

    if(num1 > num2)
    {
        printf("%.f eh maior que %.f\n", num1, num2);
    }
    else if(num1 == num2)
    {
        printf("Numeros iguais", num1, num2);
    }
    else
    {
        printf("%.f eh maior que %.f\n", num2, num1);
    }
    return 0;
}
