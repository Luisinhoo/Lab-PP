/*
   Atividade 18: Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A
                 fórmula de conversão é: L = 1000*M, sendo L o volume em litros e M o volume em metros
                 cúbicos.
                 POR LUÍS H.
*/

#include <stdio.h>

int main()
{
    int M; //metros cúbicos

    float L; //LITROS

    printf("Digite o valor de um volume EM METROS CUBICOS: ");
    scanf("%d", &M);

    L = 1000 * M;

    printf("Em litros eh: %.2f\n", L);

    return 0;
}
