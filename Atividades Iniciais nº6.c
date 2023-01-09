/*
  Atividade 6: Leia uma temperatura me graus Celcius e apresente-a convertida em graus Fahrenheit.
  POR LUÍS H.
*/

#include <stdio.h>

int main()
{
    float C; //temperatura em graus Celcius
    float F; //temperatura em graus Fahrenheit

    printf("Digite um temperatura em GRAUS CELCIUS: ");
    scanf("%f", &C);

    F = C * (9.0/5.0) + 32.0;

    printf("Em Fahrenheit fica: %.2f", F);
    return 0;
}
