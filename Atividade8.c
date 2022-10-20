/*
   Atividade 8: Leia uma temperatura em Kelvin e apresente-a convertida em graus Celcius.
   POR LUÍS H.
*/

#include <stdio.h>

int main()
{
    float K; //temperatura em Kelvin
    float C; //temperatura em Celcius

    printf("Digite uma temperatura em KELVIN: ");
    scanf("%f", &K);

    C = K - 273.15;

    printf("A temperatura em Celcius eh: %.2f", C);
    return 0;
}
