/*
   Atividade 7: Leia um temperatura em graus Fahrenheit e apresente-a convertida em graus Celcius
   POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    float F; //temperatura em Fahrenheit
    float C; //temperatura em Celcius

    printf("Digite uma temperatura em FAHRENHEIT: ");
    scanf("%f", &F);

    C = 5.0 * (F - 32.0)/9.0;

    printf("A temperatura em Celcius eh: %.2f", C);
    return 0;
}
