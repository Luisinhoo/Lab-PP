/*
  Atividade 8: Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação:
               hipotenusa = √𝑎² + 𝑏². Faça uma função que receba os valores de a e b e calcule o valor
               da hipotenusa através da equação.
  POR LUÍS h.
*/
#include <stdio.h>
#include <math.h>

float valorHipotenusa (float a, float b);

int main()
{
    float a, b;

    printf("Digite um valor qualquer para A: ");
    scanf("%f", &a);

    printf("Agora digite um valor qualquer para B: ");
    scanf("%f", &b);

    printf("O valor da hipotenusa eh: %.1f", valorHipotenusa(a, b));
    return 0;
}

float valorHipotenusa (float a, float b)
{
    float resultado = sqrt((a * a) + (b * b));
}
